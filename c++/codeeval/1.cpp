#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "1.h"

static const char * fsc_pChzName = "Fizz Buzz";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/1/";
static const int fsc_nNumber = 1;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP1::CP1()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP1::~CP1()
{
}

void CP1::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;

#if _EDITOR
	t_file.open("1.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nFizz = 0;
	int t_nBuzz = 0;
	int t_nTotal = 0;

	while (!t_file.eof())
	{
		t_file >> t_nFizz;
		t_file >> t_nBuzz;
		t_file >> t_nTotal;

		for (int t_i = 1; t_i < t_nTotal + 1; ++t_i)
		{
			if (t_i % t_nFizz == 0 && t_i % t_nBuzz == 0)
			{
				cout << "FB ";
			}
			else if (t_i % t_nFizz == 0)
			{
				cout << "F ";
			}
			else if (t_i % t_nBuzz == 0)
			{
				cout << "B ";
			}
			else
			{
				cout << t_i << " ";
			}
		}

		cout << endl;
	}
}
