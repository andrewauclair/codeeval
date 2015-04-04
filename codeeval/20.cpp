#include <iostream>
#include <fstream>
using namespace std;
#if _EDITOR
#include "20.h"
static const char * fsc_pChzName = "Lowercase";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/20/";
static const int fsc_nNumber = 20;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = PROBLEM_DIFFICULTY;
CP20::CP20()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP20::~CP20()
{
}
void CP20::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("20.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
}
