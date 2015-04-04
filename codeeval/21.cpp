#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
#if _EDITOR
#include "21.h"
static const char * fsc_pChzName = "Sum of Digits";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/21/";
static const int fsc_nNumber = 21;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP21::CP21()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP21::~CP21()
{
}
void CP21::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("21.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nValue = 0;
	int t_nTotal = 0;
	string t_strVal;

	stringstream t_ss;

	while (!t_file.eof())
	{
		if (t_nValue > 0)
		{
			cout << endl;
		}

		t_file >> t_nValue;

		t_ss << t_nValue;

		t_strVal = t_ss.str();
		t_ss.str("");

		t_nTotal = 0;
		char t_ch;
		for (int t_i = 0; t_i < t_strVal.length(); ++t_i)
		{
			t_ch = t_strVal[t_i];

			t_nTotal += atoi(&t_ch);
		}

		cout << t_nTotal;
	}
}
