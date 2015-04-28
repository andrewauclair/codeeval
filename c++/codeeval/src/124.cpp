#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "124.h"

static const char * fsc_pChzName = "Road Trip";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/124/";
static const int fsc_nNumber = 124;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP124::CP124()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP124::~CP124()
{
}

void CP124::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/124_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;

	while (getline(t_file, t_strInput))
	{
		vector<int> t_arynValues = vector<int>();
		int t_nDist = 0;

		istringstream line(t_strInput);

		while (getline(line, t_str, ';'))
		{
			istringstream line2(t_str);

			string t_strDist;
			getline(line2, t_strDist, ',');
			getline(line2, t_strDist, ',');
			t_arynValues.push_back(atoi(t_strDist.c_str()));
		}

		// loop finding the closest city and removing it from the list
		int t_nClosest = 10000000;

		while (t_arynValues.size() > 0)
		{
			int t_nIndex = 0;
			for (int t_i = 0; t_i < t_arynValues.size(); ++t_i)
			{
				if (t_arynValues[t_i] < t_nClosest)
				{
					t_nIndex = t_i;
					t_nClosest = t_arynValues[t_i];
				}
			}

			t_arynValues.erase(t_arynValues.begin() + t_nIndex);
			
			cout << t_nClosest - t_nDist;
			t_nDist = t_nClosest;

			if (t_arynValues.size() > 0)
			{
				cout << ",";
			}

			t_nClosest = 100000000;
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
