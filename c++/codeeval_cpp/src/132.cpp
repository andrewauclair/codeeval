#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "132.h"

static const char * fsc_pChzName = "The Major Element";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/132/";
static const int fsc_nNumber = 132;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP132::CP132()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP132::~CP132()
{
}

int CP132::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;

	while (getline(t_file, t_strInput))
	{
		vector<string> t_aryStrValues = vector<string>();
		vector<int> t_arynCounts = vector<int>();

		istringstream line(t_strInput);

		int t_nL = 0;

		while (getline(line, t_str, ','))
		{
			t_nL++;

			bool t_fFound = false;
			for (unsigned int t_i = 0; t_i < t_aryStrValues.size(); ++t_i)
			{
				if (t_aryStrValues[t_i] == t_str)
				{
					t_arynCounts[t_i]++;
					t_fFound = true;
					break;
				}
			}

			if (!t_fFound)
			{
				t_aryStrValues.push_back(t_str);
				t_arynCounts.push_back(1);
			}
		}

		int t_nMost = 0;
		int t_nIndex = -1;
		bool t_fMultiple = false;

		for (unsigned int t_i = 0; t_i < t_arynCounts.size(); ++t_i)
		{
			if (t_arynCounts[t_i] > t_nMost)
			{
				t_nMost = t_arynCounts[t_i];
				t_nIndex = t_i;
				t_fMultiple = false;
			}
			else if (t_arynCounts[t_i] == t_nMost)
			{
				t_fMultiple = true;
			}
		}

		if (t_nIndex != -1 && !t_fMultiple && t_arynCounts[t_nIndex] > t_nL / 2)
		{
			cout << t_aryStrValues[t_nIndex] << endl;
		}
		else
		{
			cout << "None" << endl;
		}
	}

	t_file.close();

	return 0;
}
