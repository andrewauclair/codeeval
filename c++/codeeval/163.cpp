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

#include "163.h"

static const char * fsc_pChzName = "Big Digits";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/163/";
static const int fsc_nNumber = 163;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Nil;

CP163::CP163()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP163::~CP163()
{
}

void CP163::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("163.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		vector<int> t_aryNumbers = vector<int>();

		for (int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			int t_nValue = (int)t_strInput[t_i] - 48;

			if (t_nValue >= 0 && t_nValue <= 9)
			{
				t_aryNumbers.push_back(t_nValue);
			}
		}

		for (int t_i = 0; t_i < 6; ++t_i)
		{
			for (int t_j = 0; t_j < t_aryNumbers.size(); ++t_j)
			{
				cout << fsc_aChzNumbers[t_aryNumbers[t_j]][t_i];
			}

			cout << endl;
		}
	}
}
