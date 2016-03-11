#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "107cpp.h"

int C107::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;

	while (getline(t_file, t_strInput))
	{
		bool t_fFound = false;
		int t_nLength = 0;

		while (!t_fFound)
		{
			t_fFound = true;

			t_nLength++;

			for (unsigned int t_i = 0; t_i < t_strInput.length() - t_nLength; t_i += t_nLength)
			{
				if (t_strInput.substr(t_i, t_nLength) != t_strInput.substr(t_i + t_nLength, t_nLength))
				{
					t_fFound = false;
					break;
				}
			}

			
		}

		cout << t_nLength << endl;
	}

	t_file.close();

	return 0;
}
