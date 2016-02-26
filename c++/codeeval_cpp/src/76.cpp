#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "76cpp.h"

int CP76::nRun(int argc, const char * argv[])
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

		istringstream t_line(t_strInput);

		string t_strOriginal;
		string t_strRotate;

		getline(t_line, t_strOriginal, ',');
		getline(t_line, t_strRotate, ',');

		bool t_fValid = false;
		for (unsigned int t_i = 0; t_i < t_strOriginal.length(); ++t_i)
		{
			string t_str = t_strOriginal.substr(t_i, t_strOriginal.length() - t_i) + t_strOriginal.substr(0, t_i);

			if (t_str.compare(t_strRotate) == 0)
			{
				t_fValid = true;
				break;
			}
		}

		if (t_fValid)
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}

	t_file.close();

	return 0;
}
