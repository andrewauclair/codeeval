#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "211.h"

static const char * fsc_pChzName = "Chardonnay or Cabernet";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/211/";
static const int fsc_nNumber = 211;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP211::CP211()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP211::~CP211()
{
}

int CP211::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		string t_strWines;
		string t_strLetters;

		getline(line, t_strWines, '|');
		getline(line, t_strLetters, '|');
	}

	t_file.close();

	return 0;
}
