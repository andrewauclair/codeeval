#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

#if _EDITOR

#include "170cpp.h"

int C170::nRun(int argc, const char * argv[])
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

		getline(line, t_str, ' ');

		int t_c = atoi(t_str.c_str());

		int t_n = (t_c + 1) / 2;

		int t_nMin = 0;
		int t_nMax = t_c;

		while (getline(line, t_str, ' '))
		{
			if (t_str.compare("Lower") == 0)
			{
				t_nMax = t_n - 1;
				t_n = (int)floor((t_nMax + 1 - t_nMin) / 2.0f) + t_nMin;
			}
			else if (t_str.compare("Higher") == 0)
			{
				t_nMin = t_n + 1;
				t_n = (int)floor((t_nMax + 1 - t_nMin) / 2.0f) + t_nMin;
			}
			else if (t_str.compare("Yay!") == 0)
			{
				cout << t_n << endl;
			}
		}
	}

	t_file.close();

	return 0;
}
