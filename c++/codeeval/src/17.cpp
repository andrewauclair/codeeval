#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <climits>
using namespace std;

#if _EDITOR

#include "17.h"

static const char * fsc_pChzName = "Sum of Integers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/17/";
static const int fsc_nNumber = 17;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP17::CP17()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP17::~CP17()
{
}

void CP17::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/17_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		vector<int> t_values = vector<int>();
		istringstream line(t_strInput);
		string t_str;
		int t_nHighestSum = INT_MIN;

		while (getline(line, t_str, ','))
		{
			t_values.push_back(atoi(t_str.c_str()));
		}

		for (int t_i = 0; t_i < t_values.size(); ++t_i)
		{
			int t_nSum = 0;
			for (int t_j = t_i; t_j < t_values.size(); ++t_j)
			{
				t_nSum += t_values[t_j];
			
				if (t_nSum > t_nHighestSum)
				{
					t_nHighestSum = t_nSum;
				}
			}
		}

		cout << t_nHighestSum << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
