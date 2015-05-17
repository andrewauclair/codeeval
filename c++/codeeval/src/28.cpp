#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "28.h"

static const char * fsc_pChzName = "String Searching";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/28/";
static const int fsc_nNumber = 28;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;

CP28::CP28()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP28::~CP28()
{
}

void CP28::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/28_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;
	string t_strSearch;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_str, ',');
		getline(line, t_strSearch, ',');

		int t_c = 0;
		bool t_fFound = false;

		for (int t_j = 0; t_j < t_str.length(); ++t_j)
		{
			if (t_str[t_j] == t_strSearch[t_c])// || (t_strSearch[t_c] == '*' && (t_c > 0 && t_strSearch[t_c - 1] != '\\')))
			{
				t_c++;
				
				if (t_c >= t_strSearch.length())
				{
					t_fFound = true;
					break;
				}
			}
			else if (t_str[t_j] == '*' && t_strSearch[t_c] == '\\' && (t_c + 1 < t_strSearch.length() && t_strSearch[t_c + 1] == '*'))
			{
				t_c++;
			}
			else if (t_strSearch[t_c] == '*' && ((t_c > 0 && t_strSearch[t_c - 1] != '\\') || t_c == 0))
			{
				t_c++;

				while (t_str[t_j] != t_strSearch[t_c] && t_j < t_str.length())
				{
					t_j++;
				}

				t_c++;
			}
			else
			{
				t_c = 0;
			}
		}

		if (t_fFound)
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
