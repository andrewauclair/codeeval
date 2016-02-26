#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "31cpp.h"

int CP31::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	int t_nValue = 0;
	string t_strInput;
	string t_strStatement;
	string t_strCharacter;

	while (!t_file.eof())
	{
		// string
		getline(t_file, t_strInput);

		istringstream line(t_strInput);

		int loop = 0;
		while (getline(line, t_strInput, ','))
		{
			if (loop == 0)
			{
				t_strStatement = t_strInput;
			}
			else
			{
				t_strCharacter = t_strInput;
			}
			loop++;
		}

		char t_ch = t_strCharacter[0];
		bool t_fOutput = false;
		for (int t_i = t_strStatement.length() - 1; t_i >= 0; --t_i)
		{
			if (t_ch == t_strStatement[t_i])
			{
				cout << t_i << endl;
				t_fOutput = true;
				break;
			}
		}

		if (!t_fOutput)
		{
			cout << "-1" <<endl;
		}
	}

	t_file.close();

	return 0;
}
