#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
#if _EDITOR
#include "96.h"
static const char * fsc_pChzName = "Swap Case";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/96/";
static const int fsc_nNumber = 96;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP96::CP96()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP96::~CP96()
{
}
void CP96::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
#if _EDITOR
	t_file.open("96.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		bool t_fNegative = false;
		int t_nValue = 0;
		int t_nNum = -1;
		int t_nCount = 0;

		while (getline(line, t_str, ' '))
		{
			for (int t_i = 0; t_i < t_str.length(); ++t_i)
			{
				if ((int)t_str[t_i] >= 97 && (int)t_str[t_i] <= 122)
				{
					t_str[t_i] = (int)t_str[t_i] - 32;
				}
				else if ((int)t_str[t_i] >= 65 && (int)t_str[t_i] <= 90)
				{
					t_str[t_i] = (int)t_str[t_i] + 32;
				}
			}

			cout << t_str << " ";
		}

		cout << endl;
	}
}
