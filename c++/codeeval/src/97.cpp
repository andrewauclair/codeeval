#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

#if _EDITOR

#include "97.h"

static const char * fsc_pChzName = "Find A Writer";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/97/";
static const int fsc_nNumber = 97;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP97::CP97()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP97::~CP97()
{
}

void CP97::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;

#if _EDITOR
	t_file.open("in/97_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput == "")
		{
			continue;
		}

		istringstream line(t_strInput);

		string t_strLetters;
		getline(line, t_strLetters, '|');
		string t_strIndex;
		getline(line, t_strIndex, '|');

		istringstream line2(t_strIndex);

		while (getline(line2, t_str, ' '))
		{
			if (atoi(t_str.c_str()) - 1 >= 0)
			{
				cout << t_strLetters[atoi(t_str.c_str()) - 1];
			}
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
