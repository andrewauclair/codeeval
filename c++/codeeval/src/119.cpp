#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "119.h"

static const char * fsc_pChzName = "Chain Inspection";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/119/";
static const int fsc_nNumber = 119;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP119::CP119()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP119::~CP119()
{
}

void CP119::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/119_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
