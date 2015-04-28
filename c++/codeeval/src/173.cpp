#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "173.h"

static const char * fsc_pChzName = "Without Repetitions";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/173/";
static const int fsc_nNumber = 173;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP173::CP173()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP173::~CP173()
{
}

void CP173::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/173_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		for (int t_i = 0; t_i < t_strInput.length() - 1; ++t_i)
		{
			if (t_strInput[t_i + 1] == t_strInput[t_i])
			{
				t_strInput.erase(t_i + 1, 1);
				t_i--;
			}
		}

		cout << t_strInput << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
