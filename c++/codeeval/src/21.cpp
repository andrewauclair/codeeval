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
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP21::CP21()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP21::~CP21()
{
}

int CP21::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

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

	t_file.close();

	return 0;
}
