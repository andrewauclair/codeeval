#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "74.h"

static const char * fsc_pChzName = "Minimum Coins";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/74/";
static const int fsc_nNumber = 74;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP74::CP74()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP74::~CP74()
{
}

void CP74::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/74_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		int t_nNum = atoi(t_strInput.c_str());
		int t_nCoins = 0;

		t_nCoins += (t_nNum / 5);
		t_nNum -= (t_nNum / 5) * 5;
		t_nCoins += (t_nNum / 3);
		t_nNum -= (t_nNum / 3) * 3;
		t_nCoins += t_nNum;

		cout << t_nCoins << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
