#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "152.h"

static const char * fsc_pChzName = "Age Distribution";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/152/";
static const int fsc_nNumber = 152;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP152::CP152()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP152::~CP152()
{
}

void CP152::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/152_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		int t_nNum = atoi(t_strInput.c_str());

		if (t_nNum >= 0 && t_nNum <= 2)
		{
			cout << "Still in Mama's arms";
		}
		else if (t_nNum == 3 || t_nNum == 4)
		{
			cout << "Preschool Maniac";
		}
		else if (t_nNum >= 5 && t_nNum <= 11)
		{
			cout << "Elementary school";
		}
		else if (t_nNum >= 12 && t_nNum <= 14)
		{
			cout << "Middle school";
		}
		else if (t_nNum >= 15 && t_nNum <= 18)
		{
			cout << "High school";
		}
		else if (t_nNum >= 19 && t_nNum <= 22)
		{
			cout << "College";
		}
		else if (t_nNum >= 23 && t_nNum <= 65)
		{
			cout << "Working for the man";
		}
		else if (t_nNum >= 66 && t_nNum <= 100)
		{
			cout << "The Golden Years";
		}
		else
		{
			cout << "This program is for humans";
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}