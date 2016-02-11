#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

#if _EDITOR

#include "147.h"

static const char * fsc_pChzName = "Lettercase Percentage Ratio";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/147/";
static const int fsc_nNumber = 147;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP147::CP147()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP147::~CP147()
{
}

int CP147::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		int t_cLowercase = 0; // 97 - 122
		int t_cUppercase = 0; // 65 - 90

		float t_rLowerPercent = 0.0f;
		float t_rUpperPercent = 0.0f;

		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			int t_nValue = (int)t_strInput[t_i];

			if (t_nValue >= 97 && t_nValue <= 122)
			{
				t_cLowercase++;
			}
			else if (t_nValue >= 65 && t_nValue <= 90)
			{
				t_cUppercase++;
			}
		}

		t_rLowerPercent = (t_cLowercase / (float)t_strInput.length()) * 100.0f;
		t_rUpperPercent = (t_cUppercase / (float)t_strInput.length()) * 100.0f;

		cout << std::fixed;
		cout << "lowercase: " << std::setprecision(2) << t_rLowerPercent << " uppercase: " << t_rUpperPercent << endl;
	}

	t_file.close();

	return 0;
}
