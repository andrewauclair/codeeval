#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "177cpp.h"

int CP177::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	t_file.close();

	return 0;
}
