#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "29.h"

static const char * fsc_pChzName = "Unique Elements";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/29/";
static const int fsc_nNumber = 29;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP29::CP29()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP29::~CP29()
{
}

int CP29::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		vector<string> t_aryValues = vector<string>();
		string t_strLast = "";

		while (getline(line, t_str, ','))
		{
			if (t_str.compare(t_strLast) != 0)
			{
				t_aryValues.push_back(t_str);
			}
			t_strLast = t_str;
		}

		for (int t_i = 0; t_i < t_aryValues.size(); ++t_i)
		{
			cout << t_aryValues[t_i];

			if (t_i + 1 < t_aryValues.size())
			{
				cout << ",";
			}
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
