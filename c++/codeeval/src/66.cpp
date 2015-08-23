#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#if _EDITOR

#include "66.h"

static const char * fsc_pChzName = "Pascals Triangle";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/66/";
static const int fsc_nNumber = 66;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP66::CP66()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP66::~CP66()
{
}

int CP66::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	vector<vector<int>> t_aaTriangle = vector<vector<int>>();
	vector<int> t_aryLevels = vector<int>();
	int t_nHighest = 0;

	while (!t_file.eof())
	{
		int t_level = 0;
		t_file >> t_level;
		t_aryLevels.push_back(t_level);

		if (t_level > t_nHighest)
		{
			t_nHighest = t_level;
		}
	}

	// generate the triangle up to the point we need it
	for (int t_i = 0; t_i < t_nHighest; ++t_i)
	{
		t_aaTriangle.push_back(vector<int>());

		for (int t_j = 0; t_j < t_i + 1; ++t_j)
		{
			if (t_j > 0 && t_i > 0 && t_j < t_aaTriangle[t_i - 1].size())
			{
				t_aaTriangle[t_i].push_back(t_aaTriangle[t_i - 1][t_j - 1] + t_aaTriangle[t_i - 1][t_j]);
			}
			else
			{
				t_aaTriangle[t_i].push_back(1);
			}
		}
	}

	// print out the values
	for (int t_i = 0; t_i < t_aryLevels.size(); ++t_i)
	{
		for (int t_j = 0; t_j < t_aryLevels[t_i]; ++t_j)
		{
			for (int t_k = 0; t_k < t_aaTriangle[t_j].size(); ++t_k)
			{
				cout << t_aaTriangle[t_j][t_k];
				if (t_k + 1 < t_aaTriangle[t_j].size()) cout << " ";
			}

			if (t_j + 1 < t_aryLevels[t_i]) cout << " ";
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
