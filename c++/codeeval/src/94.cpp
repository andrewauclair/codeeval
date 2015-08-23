#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "94.h"

static const char * fsc_pChzName = "Simple Calculator";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/94/";
static const int fsc_nNumber = 94;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP94::CP94()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP94::~CP94()
{
}

int CP94::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	t_file.close();

	return 0;
}
