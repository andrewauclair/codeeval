#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "PROBLEM_NUMBER.h"

static const char * fsc_pChzName = "PROBLEM_NAME";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/PROBLEM_NUMBER/";
static const int fsc_nNumber = PROBLEM_NUMBER;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = PROBLEM_DIFFICULTY;

CPPROBLEM_NUMBER::CPPROBLEM_NUMBER()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CPPROBLEM_NUMBER::~CPPROBLEM_NUMBER()
{
}

void CPPROBLEM_NUMBER::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/PROBLEM_NUMBER_in.txt", ios::in);
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
