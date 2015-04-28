#include <iostream>
#include <fstream>
#include <string>
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
	t_file.open("%_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		
	}

	t_file.close();

#if ! _EDITOR
	return 0;
#endif
}
