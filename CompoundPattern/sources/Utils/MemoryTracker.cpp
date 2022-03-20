#include "Utils/MemoryTracker.hpp"
#include "Log.hpp"
#include <cstdio>

size_t MemoryTracker::TotalAlloced = 0;
size_t MemoryTracker::TotalFreed = 0;
unsigned int MemoryTracker::s_AllocedPointersIndex = 0;
std::pair<void *, size_t> MemoryTracker::s_AllocedPointers[s_AllocedPointersSize];

MemoryTracker::MemoryTracker()
{

}

MemoryTracker::~MemoryTracker() { }

void *operator new(size_t size) noexcept(false)
{
	void *ret = malloc(size);
	if (ret == NULL)
		throw std::bad_alloc();
	MemoryTracker::addAlloced(size);
	MemoryTracker::s_AllocedPointers[MemoryTracker::s_AllocedPointersIndex].first = ret;
	MemoryTracker::s_AllocedPointers[MemoryTracker::s_AllocedPointersIndex].second = size;
	++MemoryTracker::s_AllocedPointersIndex;
	return (ret);
}

void operator delete(void *memory) throw()
{
	unsigned int index = 0;
	while (MemoryTracker::s_AllocedPointers[index].first != memory)
		++index;
	MemoryTracker::addFreed(MemoryTracker::s_AllocedPointers[index].second);
	for (unsigned int i = index; i < MemoryTracker::s_AllocedPointersIndex - 1; ++i)
		MemoryTracker::s_AllocedPointers[i] = MemoryTracker::s_AllocedPointers[i + 1];
	--MemoryTracker::s_AllocedPointersIndex;
	free(memory);
}

void PrintMemoryUsage()
{
    LOG("Memory Usage: " << MemoryTracker::CurrentUsage() << " bytes");
}

static void printMemorySpace(void *memory)
{
    for (unsigned int i = 0; i < 100; ++i)
        std::printf("[%d,%c] ", *((char *)memory + i), *((char *)memory + i));
}

void PrintAllocedPointers()
{
    std::cout << "Allocated pointers: ";
    for (unsigned int i = 0; i < MemoryTracker::s_AllocedPointersIndex; ++i)
    {
        printMemorySpace(MemoryTracker::s_AllocedPointers[i].first);
        LOG("");
    }
}
