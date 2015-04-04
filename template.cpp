#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "%.h"

static const char * fsc_pChzName = "PROBLEM_NAME";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/%/";
static const int fsc_nNumber = %;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = PROBLEM_DIFFICULTY;

CP%::CP%()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP%::~CP%()
{
}

void CP%::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("%.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
}
