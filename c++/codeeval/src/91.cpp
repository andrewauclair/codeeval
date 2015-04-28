#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "91.h"

static const char * fsc_pChzName = "Simple Sorting";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/91/";
static const int fsc_nNumber = 91;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP91::CP91()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP91::~CP91()
{
}

void CP91::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;

#if _EDITOR
	t_file.open("in/91_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		bool t_fNegative = false;
		int t_nValue = 0;
		int t_nNum = -1;
		int t_nCount = 0;
		vector<string> t_aryValues = vector<string>();
		vector<float> t_aryrValues = vector<float>();

		while (getline(line, t_str, ' '))
		{
			t_aryValues.push_back(t_str);
			t_aryrValues.push_back((float)atof(t_str.c_str()));	
		}

		bool t_fSwapped = true;

		while (t_fSwapped)
		{
			t_fSwapped = false;

			for (size_t t_i = 0; t_i < t_aryrValues.size() - 1; ++t_i)
			{
				if (t_aryrValues[t_i + 1] < t_aryrValues[t_i])
				{
					t_fSwapped = true;
					float t_rTemp = t_aryrValues[t_i + 1];
					t_aryrValues[t_i + 1] = t_aryrValues[t_i];
					t_aryrValues[t_i] = t_rTemp;

					string t_strTemp = t_aryValues[t_i + 1];
					t_aryValues[t_i + 1] = t_aryValues[t_i];
					t_aryValues[t_i] = t_strTemp;
				}
			}
		}

		for (size_t t_i = 0; t_i < t_aryValues.size(); ++t_i)
		{
			cout << t_aryValues[t_i];

			if (t_i + 1 < t_aryValues.size())
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
