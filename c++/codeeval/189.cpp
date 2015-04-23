#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
#if _EDITOR
#include "189.h"
static const char * fsc_pChzName = "Minimum Distance";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/189/";
static const int fsc_nNumber = 189;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP189::CP189()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP189::~CP189()
{
}
void CP189::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("189.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (!t_file.eof())
	{
		int t_c = 0;
		vector<int> t_aHouses = vector<int>();

		t_file >> t_c;

		int t_nLowAddress = 10001;
		int t_nHighAddress = 0;

		for (int t_i = 0; t_i < t_c; ++t_i)
		{
			int t_n = 0;
			t_file >> t_n;
			t_aHouses.push_back(t_n);

			if (t_n < t_nLowAddress)
			{
				t_nLowAddress = t_n;
			}
			if (t_n > t_nHighAddress)
			{
				t_nHighAddress = t_n;
			}
		}

		int t_lowDist = INT_MAX;

		for (int t_i = t_nLowAddress; t_i <= t_nHighAddress; ++t_i)
		{
			int t_dist = 0;
			
			for (int t_j = 0; t_j < t_aHouses.size(); ++t_j)
			{
				t_dist += abs(t_i - t_aHouses[t_j]);
			}

			if (t_dist < t_lowDist)
			{
				t_lowDist = t_dist;
			}
		}

		cout << t_lowDist << endl;
	}
}
