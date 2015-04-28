#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "75.h"

static const char * fsc_pChzName = "Flavius Josephus";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/75/";
static const int fsc_nNumber = 75;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP75::CP75()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP75::~CP75()
{
}

void CP75::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/75_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		vector<int> t_aryNums = vector<int>();
		istringstream line(t_strInput);
		string t_str;

		getline(line, t_str, ',');
		int t_c = atoi(t_str.c_str());
		getline(line, t_str, ',');
		int t_m = atoi(t_str.c_str());

		for (int t_i = 0; t_i < t_c; ++t_i)
		{
			t_aryNums.push_back(t_i);
		}

		int t_n = -1;
		int t_cOut = 0;

		while (t_cOut < t_c)
		{
			for (int t_i = 0; t_i < t_m; ++t_i)
			{
				t_n++;

				if (t_n > t_c - 1)
				{
					t_n = 0;
				}

				if (t_aryNums[t_n] == -1)
				{
					t_i--;
				}
			}

			// execute
			cout << t_n;
			t_aryNums[t_n] = -1;

			if (t_cOut + 1 < t_c)
			{
				cout << " ";
			}

			t_cOut++;
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
