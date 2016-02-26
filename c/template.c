#include <stdio.h>

#if _EDITOR

#include "PROBLEM_NUMBERc.h"

void CPPROBLEM_NUMBER::vRunPROBLEM_NUMBER(int argc, const char* argv[])
#else
int main(int argc, const char* argv[])
#endif
{
	FILE* t_file;
	
	t_file = fopen(argv[1], "r");
	
	#if !_EDITOR
	return 0;
	#endif
}
