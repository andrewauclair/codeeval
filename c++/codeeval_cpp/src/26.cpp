#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
using namespace std;

#if _EDITOR

#include "26cpp.h"

int CP26::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	struct stat filestatus;

	stat(argv[1], &filestatus);

	cout << filestatus.st_size;

	return 0;
}
