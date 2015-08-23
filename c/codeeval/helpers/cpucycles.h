#ifndef _CPU_CYCLES_H_
#define _CPU_CYCLES_H_

#include <stdint.h>
#include <intrin.h>

// This with return the current cpu cycle?
uint64_t rdtsc()
{
	return __rdtsc();
}

#endif
