#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "16cpp.h"

int C16::nRun(int argc, const char * argv[])
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

		int t_nTest = atoi(t_strInput.c_str());
		int t_c = 0;

		for(; t_nTest; ++t_c)
		{
			t_nTest &= (t_nTest - 1);
		}
		cout << t_c << endl;
	}

	t_file.close();

	return 0;
}
