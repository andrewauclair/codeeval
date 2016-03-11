#ifndef _CU_CYCLES_H_
#define _CU_CYCLES_H_

#include <stdint.h>
#include <intrin.h>

// This with return the current Cu cycle?
uint64_t rdtsc()
{
	return __rdtsc();
}

#endif
