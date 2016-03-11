#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "18cpp.h"

int C18::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	int t_nCap = 0;
	int t_nNum = 0;
	char t_junk;

	while (!t_file.eof())
	{
		t_file >> t_nCap >> t_junk >> t_nNum;

		int t_nResult = t_nNum;

		while (t_nResult < t_nCap)
		{
			t_nResult += t_nNum;
		}

		cout << t_nResult << endl;
	}

	t_file.close();

	return 0;
}
