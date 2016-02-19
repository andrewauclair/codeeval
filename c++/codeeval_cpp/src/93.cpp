#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "93.h"

static const char * fsc_pChzName = "Capitalize Words";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/93/";
static const int fsc_nNumber = 93;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP93::CP93()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP93::~CP93()
{
}

int CP93::nRun(int argc, const char * argv[])
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
		bool t_fNegative = false;
		int t_nValue = 0;
		int t_nNum = -1;
		int t_nCount = 0;

		while (getline(line, t_str, ' '))
		{
			if ((int)t_str[0] >= 97 && (int)t_str[0] <= 122)
			{
				// lower case
				t_str[0] = (int)t_str[0] - 32;
			}

			cout << t_str << " ";
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
