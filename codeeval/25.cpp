#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
#if _EDITOR
#include "25.h"
static const char * fsc_pChzName = "Odd Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/25/";
static const int fsc_nNumber = 25;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP25::CP25()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP25::~CP25()
{
}
void CP25::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("25.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	for (int t_i = 1; t_i < 100; t_i += 2)
	{
		cout << t_i << endl;
	}
}
