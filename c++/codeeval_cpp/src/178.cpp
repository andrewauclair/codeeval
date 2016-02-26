#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

#if _EDITOR

#include "178cpp.h"

int CP178::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		vector<char> t_aryChars = vector<char>();
		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			t_aryChars.push_back(t_str[0]);
		}

		int t_nSize = (int)sqrt((double)t_aryChars.size());

		
		for (int t_j = 0; t_j < t_nSize; ++t_j)
		{
			for (int t_i = t_nSize - 1; t_i >= 0; --t_i)
			{
				cout << t_aryChars[t_i * t_nSize + t_j] << " ";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
