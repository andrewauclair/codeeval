#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "16.h"

static const char * fsc_pChzName = "Number of Ones";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/16/";
static const int fsc_nNumber = 16;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP16::CP16()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP16::~CP16()
{
}

int CP16::nRun(int argc, const char * argv[])
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
