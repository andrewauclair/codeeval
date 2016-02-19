#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "177.h"

static const char * fsc_pChzName = "Justify the Text";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/177/";
static const int fsc_nNumber = 177;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP177::CP177()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP177::~CP177()
{
}

int CP177::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	t_file.close();

	return 0;
}
