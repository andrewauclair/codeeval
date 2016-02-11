#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
using namespace std;

#if _EDITOR

#include "26.h"
static const char * fsc_pChzName = "File Size";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/26/";
static const int fsc_nNumber = 26;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP26::CP26()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP26::~CP26()
{
}

int CP26::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	struct stat filestatus;

	stat(argv[1], &filestatus);

	cout << filestatus.st_size;

	return 0;
}
