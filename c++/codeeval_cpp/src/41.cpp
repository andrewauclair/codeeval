#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "41.h"

static const char * fsc_pChzName = "Array Absurdity";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/41/";
static const int fsc_nNumber = 41;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP41::CP41()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP41::~CP41()
{
}

int CP41::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		t_strInput = t_strInput.substr(t_strInput.find_first_of(';') + 1);

		istringstream line(t_strInput);
		vector<string> t_strs = vector<string>();
		string t_str;

		while (getline(line, t_str, ','))
		{
			t_strs.push_back(t_str);
		}

		bool t_fFound = false;
		for (unsigned int t_i = 0; t_i < t_strs.size(); ++t_i)
		{
			for (unsigned int t_j = t_i + 1; t_j < t_strs.size(); ++t_j)
			{
				if (t_strs[t_i].compare(t_strs[t_j]) == 0)
				{
					cout << t_strs[t_i] << endl;
					t_fFound = true;
					break;
				}
			}

			if (t_fFound)
			{
				break;
			}
		}
	}

	t_file.close();

	return 0;
}
