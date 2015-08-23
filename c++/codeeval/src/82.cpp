#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "82.h"

int CP82::power(int p_x, int p_y)
#else
int power(int p_x, int p_y)
#endif
{
	int t_nTotal = 1;

	for (int t_i = 0; t_i < p_y; ++t_i)
	{
		t_nTotal *= p_x;
	}

	return t_nTotal;
}

#if _EDITOR

static const char * fsc_pChzName = "Armstrong Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/82/";
static const int fsc_nNumber = 82;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP82::CP82()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP82::~CP82()
{
}

int CP82::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nValue = 0;
	int t_nTotal = 0;

	string t_str;
	stringstream t_ss;

	while (!t_file.eof())
	{
		t_nTotal = 0;
		t_file >> t_nValue;

		t_ss << t_nValue;
		t_str = t_ss.str();
		t_ss.str("");

		char t_ch;

		for (int t_i = 0; t_i < t_str.length(); ++t_i)
		{
			t_ch = t_str[t_i];
			t_nTotal += power((int)atoi(&t_ch), (int)t_str.length());
		}

		if (t_nTotal == t_nValue)
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}

	t_file.close();

	return 0;
}
