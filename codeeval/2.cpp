#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

void vSortAndPrint(vector<string> p_aryStrLines, int p_c)
{
	int t_nLength = p_aryStrLines.size();

	bool t_fSwapped = false;

	do
	{
		t_fSwapped = false;

		for (int t_i = 1; t_i < t_nLength; ++t_i)
		{
			if (p_aryStrLines[t_i-1].length() < p_aryStrLines[t_i].length())
			{
				string t_str = p_aryStrLines[t_i-1];
				p_aryStrLines[t_i-1] = p_aryStrLines[t_i];
				p_aryStrLines[t_i] = t_str;
				t_fSwapped = true;
			}
		}
	}
	while (t_fSwapped);

	for (int t_i = 0; t_i < p_c; ++t_i)
	{
		cout << p_aryStrLines[t_i] << endl;
	}
}

#if _EDITOR

#include "2.h"

static const char * fsc_pChzName = "Longest Lines";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/2/";
static const int fsc_nNumber = 2;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Nil;

CP2::CP2()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP2::~CP2()
{
}

void CP2::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("2.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	getline(t_file, t_strInput);

	int t_nLines = atoi(t_strInput.c_str());
	vector<string> t_aryStrLines = vector<string>();

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		t_aryStrLines.push_back(t_strInput);
	}

	vSortAndPrint(t_aryStrLines, t_nLines);
}
