#include <iostream>

#if _EDITOR

#include "25cpp.h"

int CP25::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	unsigned int t_i = 1;
	for (t_i = 1; t_i < 100; t_i += 2)
	{
		std::cout << t_i << std::endl;
	}
	
	return 0;
}
