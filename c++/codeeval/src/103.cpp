#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "103.h"

static const char * fsc_pChzName = "Lowest Unique Number";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/103/";
static const int fsc_nNumber = 103;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP103::CP103()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP103::~CP103()
{
}

void CP103::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/103_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
	
	string t_str;

	while (getline(t_file, t_strInput))
	{
		int t_aNums[9];
		t_aNums[0] = 0;
		t_aNums[1] = 0;
		t_aNums[2] = 0;
		t_aNums[3] = 0;
		t_aNums[4] = 0;
		t_aNums[5] = 0;
		t_aNums[6] = 0;
		t_aNums[7] = 0;
		t_aNums[8] = 0;

		istringstream line(t_strInput);

		vector<int> t_arynValues = vector<int>();

		while (getline(line, t_str, ' '))
		{
			t_arynValues.push_back(atoi(t_str.c_str()));

			t_aNums[atoi(t_str.c_str()) - 1]++;
		}

		bool t_fFound = false;
		int t_nIndex = 0;

		for (int t_i = 0; t_i < 9; ++t_i)
		{
			if (t_aNums[t_i] == 1)
			{
				t_nIndex = t_i + 1;
				t_fFound = true;
				break;
			}
		}
		
		if (!t_fFound)
		{
			cout << "0" << endl;
		}
		else
		{
			for (int t_i = 0; t_i < t_arynValues.size(); ++t_i)
			{
				if (t_arynValues[t_i] == t_nIndex)
				{
					cout << t_i + 1 << endl;
					break;
				}
			}
		}
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
