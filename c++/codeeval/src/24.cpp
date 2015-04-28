#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "24.h"

static const char * fsc_pChzName = "Sum of Integers From File";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/24/";
static const int fsc_nNumber = 24;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP24::CP24()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP24::~CP24()
{
}

void CP24::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/24_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nTotal = 0;
	int t_nValue = 0;
	string t_str("f");

	while (!t_file.eof())
	{
		t_file >> t_nValue;

		t_nTotal += t_nValue;
	}

	t_nTotal -= t_nValue;
	cout << t_nTotal;

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
