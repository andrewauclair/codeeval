#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "22cpp.h"

int C22::fib(int p_nNum)
#else
int fib(int p_nNum)
#endif
{
	if (p_nNum < 2)
	{
		return p_nNum;
	}
	
	return fib(p_nNum - 1) + fib(p_nNum - 2);
}

#if _EDITOR

int C22::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nValue = 0;

	while (!t_file.eof())
	{
		t_file >> t_nValue;

		cout << fib(t_nValue) << endl;
	}

	t_file.close();

	return 0;
}
