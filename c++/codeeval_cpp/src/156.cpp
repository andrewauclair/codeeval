#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "156cpp.h"

int CP156::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		bool t_fUpper = true;

		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			int t_nValue = (int)t_strInput[t_i];

			if ( (t_nValue >= 97 && t_nValue <= 122) || (t_nValue >= 65 && t_nValue <= 90) )
			{
				if (t_fUpper)
				{
					cout << (char)toupper(t_nValue);
				}
				else
				{
					cout << (char)tolower(t_nValue);
				}

				t_fUpper = !t_fUpper;
			}
			else
			{
				cout << t_strInput[t_i];
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
