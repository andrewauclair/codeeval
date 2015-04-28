#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "177.h"

static const char * fsc_pChzName = "Justify the Text";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/177/";
static const int fsc_nNumber = 177;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP177::CP177()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP177::~CP177()
{
}

void CP177::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/177_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
