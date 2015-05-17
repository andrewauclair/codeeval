#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

#if _EDITOR

#include "45.h"

bool CP45::isPalindrome(string p_str)
#else
bool isPalindrome(string p_str)
#endif
{
	for (int t_i = 0; t_i < p_str.length() / 2; ++t_i)
	{
		if (p_str[t_i] != p_str[p_str.length() - 1 - t_i])
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR

static const char * fsc_pChzName = "Reverse and Add";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/45/";
static const int fsc_nNumber = 45;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP45::CP45()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP45::~CP45()
{
}

void CP45::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/45_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		int t_c = 0;
		while (!isPalindrome(t_strInput))
		{
			int t_n1 = atoi(t_strInput.c_str());
			reverse(t_strInput.begin(), t_strInput.end());

			int t_n2 = atoi(t_strInput.c_str());

			stringstream t_ss;

			t_ss << t_n1 + t_n2;
			t_strInput = t_ss.str();

			t_c++;
		}

		cout << t_c << " " << t_strInput << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
