#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
#if _EDITOR
#include "167.h"
static const char * fsc_pChzName = "Read More";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/167/";
static const int fsc_nNumber = 167;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP167::CP167()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP167::~CP167()
{
}
void CP167::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("167.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
}
