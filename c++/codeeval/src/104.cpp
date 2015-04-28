#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "104.h"

static const char * fsc_pChzName = "Word to Digit";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/104/";
static const int fsc_nNumber = 104;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP104::CP104()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP104::~CP104()
{
}

void CP104::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/104_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		while (getline(line, t_str, ';'))
		{
			if (t_str == "zero")
			{
				cout << "0";
			}
			else if (t_str == "one")
			{
				cout << "1";
			}
			else if (t_str == "two")
			{
				cout << "2";
			}
			else if (t_str == "three")
			{
				cout << "3";
			}
			else if (t_str == "four")
			{
				cout << "4";
			}
			else if (t_str == "five")
			{
				cout << "5";
			}
			else if (t_str == "six")
			{
				cout << "6";
			}
			else if (t_str == "seven")
			{
				cout << "7";
			}
			else if (t_str == "eight")
			{
				cout << "8";
			}
			else if (t_str == "nine")
			{
				cout << "9";
			}
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
