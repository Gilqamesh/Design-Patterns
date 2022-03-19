#ifndef ALLOCATIONMETRICS_HPP
# define ALLOCATIONMETRICS_HPP

# include <iostream>
# define s_AllocedPointersSize 10000000

// Todo: improve bookkeeping of memory addresses
// need to store the addresses without using new

class AllocationMetrics
{
static size_t TotalAlloced;
static size_t TotalFreed;
static std::pair<void *, size_t> s_AllocedPointers[s_AllocedPointersSize];
static unsigned int s_AllocedPointersIndex;
friend void *operator new(size_t size) noexcept(false);
friend void operator delete(void *memory) throw();
friend void PrintAllocedPointers(void);
public:
	AllocationMetrics();
	~AllocationMetrics();

	static size_t CurrentUsage() { return (TotalAlloced - TotalFreed); }
	static void addAlloced(size_t size) { TotalAlloced += size; }
	static void addFreed(size_t size) { TotalFreed += size; }
};

void *operator new(size_t size) noexcept(false);
void operator delete(void *memory) throw();

void PrintMemoryUsage(void);
void PrintAllocedPointers(void);

#endif
