#include "AllocationMetrics.hpp"
#include <iostream>
#include <cstdio>

size_t AllocationMetrics::TotalAlloced = 0;
size_t AllocationMetrics::TotalFreed = 0;
unsigned int AllocationMetrics::s_AllocedPointersIndex = 0;
std::pair<void *, size_t> AllocationMetrics::s_AllocedPointers[s_AllocedPointersSize];

AllocationMetrics::AllocationMetrics()
{

}

AllocationMetrics::~AllocationMetrics() { }

void *operator new(size_t size) noexcept(false)
{
	void *ret = malloc(size);
	if (ret == NULL)
		throw std::bad_alloc();
	AllocationMetrics::addAlloced(size);
	AllocationMetrics::s_AllocedPointers[AllocationMetrics::s_AllocedPointersIndex].first = ret;
	AllocationMetrics::s_AllocedPointers[AllocationMetrics::s_AllocedPointersIndex].second = size;
	++AllocationMetrics::s_AllocedPointersIndex;
	return (ret);
}

void operator delete(void *memory) throw()
{
	unsigned int index = 0;
	while (AllocationMetrics::s_AllocedPointers[index].first != memory)
		++index;
	AllocationMetrics::addFreed(AllocationMetrics::s_AllocedPointers[index].second);
	for (unsigned int i = index; i < AllocationMetrics::s_AllocedPointersIndex - 1; ++i)
		AllocationMetrics::s_AllocedPointers[i] = AllocationMetrics::s_AllocedPointers[i + 1];
	--AllocationMetrics::s_AllocedPointersIndex;
	free(memory);
}

void PrintMemoryUsage()
{
	std::cout << "Memory Usage: " << AllocationMetrics::CurrentUsage() << " bytes" << std::endl;
}

static void printMemorySpace(void *memory)
{
    for (unsigned int i = 0; i < 100; ++i)
        std::printf("[%d,%c] ", *((char *)memory + i), *((char *)memory + i));
}

void PrintAllocedPointers()
{
    std::cout << "Allocated pointers: ";
    for (unsigned int i = 0; i < AllocationMetrics::s_AllocedPointersIndex; ++i)
    {
        printMemorySpace(AllocationMetrics::s_AllocedPointers[i].first);
        std::cout << std::endl;
        // std::cout << AllocationMetrics::s_AllocedPointers[i].first << " ";
    }
}
