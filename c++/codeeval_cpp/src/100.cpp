#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "100cpp.h"

int CP100::nRun(int argc, const char * argv[])
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

		if (t_nValue % 2 == 0)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}

	t_file.close();

	return 0;
}
