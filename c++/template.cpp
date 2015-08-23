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

int CPPROBLEM_NUMBER::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		
	}

	t_file.close();

	return 0;
}
