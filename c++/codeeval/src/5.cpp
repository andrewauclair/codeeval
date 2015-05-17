#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "5.h"
static const char * fsc_pChzName = "Detecting Cycles";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/5/";
static const int fsc_nNumber = 5;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP5::CP5()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP5::~CP5()
{
}

void CP5::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/5_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;
	vector<string> t_aStrs = vector<string>();

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			t_aStrs.push_back(t_str);
		}

		int t_c = 50 < t_aStrs.size() ? 50 : t_aStrs.size();

		for (int t_i = t_c; t_i > 0; --t_i)
		{
			int t_t = 0;
			int t_h = 0;

			bool t_fFound = false;

			for (t_t = 0; t_t < t_aStrs.size(); ++t_t, t_h += 2)
			{
				if (t_h >= t_aStrs.size())
				{
					t_h -= t_aStrs.size();
				}

				if (t_aStrs[t_t].compare(t_aStrs[t_h]) == 0 && abs(t_h - t_t) == t_i)
				{
					t_fFound = true;
					break;
				}
			}

			if (t_fFound)
			{
				int t_min = t_t < t_h ? t_t : t_h;
				int t_max = t_h > t_t ? t_h : t_t;

				for (int t_k = t_min - t_i / 2; t_k < t_max - t_i / 2; ++t_k)
				{
					cout << t_aStrs[t_k] << " ";
				}

				break;
			}
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
