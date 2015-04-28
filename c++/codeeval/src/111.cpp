#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "111.h"

static const char * fsc_pChzName = "Longest Word";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/111/";
static const int fsc_nNumber = 111;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP111::CP111()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP111::~CP111()
{
}

void CP111::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/111_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;
	float t_rPP;
	float t_rCH;
	int t_nChange = 0;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		int t_nLongest = 0;
		string t_strLongest;

		while (getline(line, t_str, ' '))
		{
			if (t_str.size() > t_nLongest)
			{
				t_nLongest = t_str.size();
				t_strLongest = t_str;
			}
		}

		cout << t_strLongest << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
