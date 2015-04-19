#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "76.h"

static const char * fsc_pChzName = "String Rotation";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/76/";
static const int fsc_nNumber = 76;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Nil;

CP76::CP76()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP76::~CP76()
{
}

void CP76::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("76.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

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
		for (int t_i = 0; t_i < t_strOriginal.length(); ++t_i)
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
}
