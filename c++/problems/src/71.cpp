#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "71.h"

static const char * fsc_pChzName = "Reverse Groups";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/71/";
static const int fsc_nNumber = 71;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP71::CP71()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP71::~CP71()
{
}

int CP71::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		string t_strValues;
		getline(line, t_strValues, ';');
		string t_strFlip;
		getline(line, t_strFlip, ';');

		int t_cFlip = atoi(t_strFlip.c_str());
		vector<int> t_aOrig = vector<int>();

		string t_str;
		istringstream line2(t_strValues);

		while (getline(line2, t_str, ','))
		{
			t_aOrig.push_back(atoi(t_str.c_str()));
		}

		vector<int> t_aFlipped = vector<int>();

		unsigned int t_i = 0;

		while ((unsigned int)(t_i + t_cFlip) <= t_aOrig.size())
		{
			for (unsigned int t_j = t_i + t_cFlip - 1; t_j >= t_i; --t_j)
			{
				t_aFlipped.push_back(t_aOrig[t_j]);
			}
			t_i += t_cFlip;
		}

		for (t_i = 0; t_i < t_aOrig.size(); ++t_i)
		{
			if (t_i < t_aFlipped.size())
			{
				cout << t_aFlipped[t_i];
			}
			else
			{
				cout << t_aOrig[t_i];
			}

			if (t_i + 1 < t_aOrig.size())
			{
				cout << ",";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
