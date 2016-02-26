#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "24cpp.h"

int CP24::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nTotal = 0;
	int t_nValue = 0;
	string t_str("f");

	while (!t_file.eof())
	{
		t_file >> t_nValue;

		t_nTotal += t_nValue;
	}

	t_nTotal -= t_nValue;
	cout << t_nTotal;

	t_file.close();

	return 0;
}
