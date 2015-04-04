#include <iostream>
#include <fstream>
using namespace std;
#if _EDITOR
#include "40.h"
static const char * fsc_pChzName = "Self Describing Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/40/";
static const int fsc_nNumber = 40;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP40::CP40()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP40::~CP40()
{
}
void CP40::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("40.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;

	while (getline(t_file, t_strInput))
	{
		int t_anCounts[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

		for (int t_i = 0; t_i < t_strInput.size(); ++t_i)
		{
			char t_ch = t_strInput[t_i];
			t_anCounts[atoi(&t_ch)]++;
		}
		bool t_fSelf = true;
		for (int t_i = 0; t_i < t_strInput.size(); ++t_i)
		{
			char t_ch = t_strInput[t_i];
			//cout << t_anCounts[t_i] << " " << atoi(&t_ch) << endl;
			if (t_anCounts[t_i] != atoi(&t_ch))
			{
				t_fSelf = false;
				break;
			}
		}

		if (t_fSelf)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
}
