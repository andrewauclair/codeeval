#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

static const char* fsc_aChzNumbers[10][6] =
{
	{
		"-**--",
		"*--*-",
		"*--*-",
		"*--*-",
		"-**--",
		"-----"
	},
	{
		"--*--",
		"-**--",
		"--*--",
		"--*--",
		"-***-",
		"-----"
	},
	{
		"***--",
		"---*-",
		"-**--",
		"*----",
		"****-",
		"-----"
	},
	{
		"***--",
		"---*-",
		"-**--",
		"---*-",
		"***--",
		"-----"
	},
	{
		"-*---",
		"*--*-",
		"****-",
		"---*-",
		"---*-",
		"-----"
	},
	{
		"****-",
		"*----",
		"***--",
		"---*-",
		"***--",
		"-----"
	},
	{
		"-**--",
		"*----",
		"***--",
		"*--*-",
		"-**--",
		"-----"
	},
	{
		"****-",
		"---*-",
		"--*--",
		"-*---",
		"-*---",
		"-----"
	},
	{
		"-**--",
		"*--*-",
		"-**--",
		"*--*-",
		"-**--",
		"-----"
	},
	{
		"-**--",
		"*--*-",
		"-***-",
		"---*-",
		"-**--",
		"-----"
	}
};

#if _EDITOR

#include "163cpp.h"

int CP163::nRun(int argc, const char * argv[])
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

		vector<int> t_aryNumbers = vector<int>();

		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			int t_nValue = (int)t_strInput[t_i] - 48;

			if (t_nValue >= 0 && t_nValue <= 9)
			{
				t_aryNumbers.push_back(t_nValue);
			}
		}

		for (int t_i = 0; t_i < 6; ++t_i)
		{
			for (unsigned int t_j = 0; t_j < t_aryNumbers.size(); ++t_j)
			{
				cout << fsc_aChzNumbers[t_aryNumbers[t_j]][t_i];
			}

			cout << endl;
		}
	}

	t_file.close();

	return 0;
}
