#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <climits>
#include <sstream>
using namespace std;

#if _EDITOR

#include "186.h"

static const char * fsc_pChzName = "Max Range Sum";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/186/";
static const int fsc_nNumber = 186;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP186::CP186()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP186::~CP186()
{
}

int CP186::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		vector<int> t_values = vector<int>();
		istringstream line(t_strInput);
		string t_strLine;
		string t_str;
		int t_nHighestSum = INT_MIN;
		unsigned int t_c = 0;

		getline(line, t_str, ';');
		t_c = atoi(t_str.c_str());
		getline(line, t_strLine, ';');
		istringstream line2(t_strLine);

		while (getline(line2, t_str, ' '))
		{
			t_values.push_back(atoi(t_str.c_str()));
		}

		for (unsigned int t_i = 0; t_i < t_values.size(); ++t_i)
		{
			int t_nSum = 0;
			if (t_i + t_c <= t_values.size())
			{
				for (unsigned int t_j = t_i; t_j < t_i + t_c; ++t_j)
				{
					t_nSum += t_values[t_j];		
				}
			}
			if (t_nSum > t_nHighestSum)
			{
				t_nHighestSum = t_nSum;
			}
		}

		if (t_nHighestSum > 0)
		{
			cout << t_nHighestSum << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}

	t_file.close();

	return 0;
}
