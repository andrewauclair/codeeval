#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "200cpp.h"

int C200::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		
	}

	t_file.close();

	return 0;
}
