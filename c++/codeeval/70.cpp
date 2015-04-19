#include <iostream>
#include <fstream>
using namespace std;
#if _EDITOR
#include "70.h"
static const char * fsc_pChzName = "Overlapping Rectangles";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/70/";
static const int fsc_nNumber = 70;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = PROBLEM_DIFFICULTY;
CP70::CP70()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP70::~CP70()
{
}
void CP70::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("70.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
}
