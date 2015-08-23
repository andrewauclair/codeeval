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

int CP24::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

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

	return 0;
}
