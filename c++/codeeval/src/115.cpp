#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "115.h"

static const char * fsc_pChzName = "Mixed Content";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/115/";
static const int fsc_nNumber = 115;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP115::CP115()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP115::~CP115()
{
}

void CP115::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/115_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		vector<string> t_aryStrs = vector<string>();
		vector<int> t_aryValues = vector<int>();

		bool t_fOutput = false;

		while (getline(line, t_str, ','))
		{
			int t_nValue = 0;

			stringstream ss;
			ss << t_str;
			ss >> t_nValue;

			if (ss.fail())
			{
				t_aryStrs.push_back(t_str);
				t_fOutput = true;
			}
			else
			{
				t_aryValues.push_back(atoi(t_str.c_str()));	
			}

			ss.str("");
		}

		for (int t_i = 0; t_i < t_aryStrs.size(); ++t_i)
		{
			cout << t_aryStrs[t_i];

			if (t_i + 1 < t_aryStrs.size())
			{
				cout << ",";
			}
		}
		if (t_aryStrs.size() > 0 && t_aryValues.size() > 0)
		{
			cout << "|";
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

#if !_EDITOR
	return 0;
#endif
}
