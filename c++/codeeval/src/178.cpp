#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

#if _EDITOR

#include "178.h"

static const char * fsc_pChzName = "Matrix Rotation";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/178/";
static const int fsc_nNumber = 178;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP178::CP178()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP178::~CP178()
{
}

void CP178::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
	string t_str;

#if _EDITOR
	t_file.open("in/178_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		vector<char> t_aryChars = vector<char>();
		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			t_aryChars.push_back(t_str[0]);
		}

		int t_nSize = (int)sqrt((double)t_aryChars.size());

		
		for (int t_j = 0; t_j < t_nSize; ++t_j)
		{
			for (int t_i = t_nSize - 1; t_i >= 0; --t_i)
			{
				cout << t_aryChars[t_i * t_nSize + t_j] << " ";
			}
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
