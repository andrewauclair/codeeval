#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "136cpp.h"

int C136::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nLastPos = -1;

	while (getline(t_file, t_strInput))
	{
		if (t_nLastPos == -1)
		{
			t_nLastPos = t_strInput.find('_');
			t_strInput[t_nLastPos] = '|';
			cout << t_strInput << endl;
			continue;
		}

		int t_nGatePos = t_strInput.find('_');
		int t_nCheckPos = t_strInput.find('C');

		if (t_nCheckPos != std::string::npos)
		{
			if (t_nCheckPos + 1 == t_nLastPos)
			{
				t_strInput[t_nCheckPos] = '/';
				cout << t_strInput << endl;
				t_nLastPos = t_nCheckPos;
				continue;
			}
			else if (t_nCheckPos - 1 == t_nLastPos)
			{
				t_strInput[t_nCheckPos] = '\\';
				cout << t_strInput << endl;
				t_nLastPos = t_nCheckPos;
				continue;
			}
			else if (t_nCheckPos == t_nLastPos)
			{
				t_strInput[t_nCheckPos] = '|';
				cout << t_strInput << endl;
				t_nLastPos = t_nCheckPos;
				continue;
			}
		}

		if (t_nGatePos != std::string::npos)
		{
			if (t_nGatePos + 1 == t_nLastPos)
			{
				t_strInput[t_nGatePos] = '/';
				cout << t_strInput << endl;
				t_nLastPos = t_nGatePos;
				continue;
			}
			else if (t_nGatePos - 1 == t_nLastPos)
			{
				t_strInput[t_nGatePos] = '\\';
				cout << t_strInput << endl;
				t_nLastPos = t_nGatePos;
				continue;
			}
			else if (t_nGatePos == t_nLastPos)
			{
				t_strInput[t_nGatePos] = '|';
				cout << t_strInput << endl;
				t_nLastPos = t_nGatePos;
				continue;
			}
		}
	}

	t_file.close();

	return 0;
}
