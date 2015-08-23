#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "205.h"

static const char * fsc_pChzName = "Clean Up the Words";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/205/";
static const int fsc_nNumber = 205;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP205::CP205()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP205::~CP205()
{
}

int CP205::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		bool t_fFoundFirst = false;
		bool t_fNonLetter = true;
		string t_strResult = "";

		for (int t_i = 0; t_i < t_strInput.size(); ++t_i)
		{
			if (((int)t_strInput[t_i] >= 65 && (int)t_strInput[t_i] <= 90) ||
				((int)t_strInput[t_i] >= 97 && (int)t_strInput[t_i] <= 122))
			{
				if ((int)t_strInput[t_i] < 97)
				{
					t_strInput[t_i] = (char)((int)t_strInput[t_i] + 32);
				}

				if (t_fFoundFirst && t_fNonLetter)
				{
					t_strResult += " ";
				}

				t_strResult += t_strInput[t_i];
				t_fFoundFirst = true;
				t_fNonLetter = false;
			}
			else
			{
				t_fNonLetter = true;
			}
		}

		cout << t_strResult << endl;
	}

	t_file.close();

	return 0;
}
