#include <iostream>
#include <fstream>
#include <string>
#include <locale>
using namespace std;

#if _EDITOR

#include "20.h"

static const char * fsc_pChzName = "Lowercase";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/20/";
static const int fsc_nNumber = 20;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

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

#if _EDITOR
	t_file.open("in/20_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_strLine;
	locale t_loc;

	while (!t_file.eof())
	{
		getline(t_file, t_strLine);

		for (string::size_type t_i = 0; t_i < t_strLine.length(); ++t_i)
		{
			cout << tolower(t_strLine[t_i], t_loc);
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
