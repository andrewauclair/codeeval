#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "160.h"

static const char * fsc_pChzName = "Nice Angles";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/160/";
static const int fsc_nNumber = 160;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Nil;

CP160::CP160()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP160::~CP160()
{
}

void CP160::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("160.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		double t_rNumber = atof(t_strInput.c_str());
		int t_nAngle = (int)t_rNumber;
		t_rNumber -= (int)t_rNumber;
		int t_nMinutes = (int)(t_rNumber * 60);
		t_rNumber *= 60;
		t_rNumber -= t_nMinutes;
		int t_nSeconds = (int)(t_rNumber * 60);
		
		t_rNumber -= (int)t_rNumber;

		printf("%d.%.2d'%.2d\"\n", t_nAngle, t_nMinutes, t_nSeconds);
	}
}
