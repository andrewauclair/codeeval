#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "14.h"

static const char * fsc_pChzName = "String Permutations";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/14/";
static const int fsc_nNumber = 14;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;

CP14::CP14()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP14::~CP14()
{
}

void CP14::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/14.txt", ios::in);
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
