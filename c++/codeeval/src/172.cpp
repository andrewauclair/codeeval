#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "172.h"

static const char * fsc_pChzName = "Card Number Validation";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/172/";
static const int fsc_nNumber = 172;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP172::CP172()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP172::~CP172()
{
}

void CP172::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/172_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		string t_strCard;
		istringstream line(t_strInput);
		string t_str;

		while (getline(line, t_str, ' '))
		{
			t_strCard += t_str;
		}

		int t_c = 0;
		int t_iOdd = 0;

		// loop through the numbers
		for (int t_i = t_strCard.length() - 1; t_i >= 0; --t_i, ++t_iOdd)
		{
			int t_n = atoi(t_strCard.substr(t_i, 1).c_str());

			if (t_iOdd % 2 != 0)
			{
				// double the number
				t_n *= 2;
			}

			if (t_n > 9)
			{
				t_n = (t_n / 10) + (t_n % 10);
			}

			t_c += t_n;
		}

		if (t_c % 10 == 0)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
