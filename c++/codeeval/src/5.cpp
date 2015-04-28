#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "5.h"
static const char * fsc_pChzName = "Detecting Cycles";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/5/";
static const int fsc_nNumber = 5;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP5::CP5()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP5::~CP5()
{
}

void CP5::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/5_in.txt", ios::in);
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
