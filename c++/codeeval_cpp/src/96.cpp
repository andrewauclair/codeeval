#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "96cpp.h"

int C96::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		bool t_fNegative = false;
		int t_nValue = 0;
		int t_nNum = -1;
		int t_nCount = 0;

		while (getline(line, t_str, ' '))
		{
			for (size_t t_i = 0; t_i < t_str.length(); ++t_i)
			{
				if ((int)t_str[t_i] >= 97 && (int)t_str[t_i] <= 122)
				{
					t_str[t_i] = (int)t_str[t_i] - 32;
				}
				else if ((int)t_str[t_i] >= 65 && (int)t_str[t_i] <= 90)
				{
					t_str[t_i] = (int)t_str[t_i] + 32;
				}
			}

			cout << t_str << " ";
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
