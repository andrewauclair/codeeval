#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "15cpp.h"

int C15::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	int t_nNum = 1;

	if (*(char*)&t_nNum == 1)
	{
		cout << "LittleEndian";
	}
	else
	{
		cout << "BigEndian";
	}

	return 0;
}
