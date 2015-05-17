#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

#if _EDITOR

#include "170.h"

static const char * fsc_pChzName = "Guess the Number";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/170/";
static const int fsc_nNumber = 170;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP170::CP170()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP170::~CP170()
{
}

void CP170::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/170_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

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
				t_n = ((t_nMax + 1 - t_nMin) / 2.0f) + t_nMin;
			}
			else if (t_str.compare("Higher") == 0)
			{
				t_nMin = t_n + 1;
				t_n = ((t_nMax + 1 - t_nMin) / 2.0f) + t_nMin;
			}
			else if (t_str.compare("Yay!") == 0)
			{
				cout << t_n << endl;
			}
		}
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
