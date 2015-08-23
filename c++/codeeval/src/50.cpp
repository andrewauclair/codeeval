#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "50.h"

static const char * fsc_pChzName = "String Substitution";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/50/";
static const int fsc_nNumber = 50;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;

CP50::CP50()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP50::~CP50()
{
}

int CP50::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_strOne;
	string t_strTwo;
	string t_strMain;
	string t_strUsed;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_strMain, ';');
		t_strUsed = string(t_strMain.length(), '0');

		string t_strCurrent = t_strMain;
		string t_strCurrentUsed = t_strUsed;

		while (getline(line, t_strOne, ','))
		{
			getline(line, t_strTwo, ',');

			int t_i = 0;

			while (t_strCurrent.find(t_strOne, t_i) != string::npos)
			{
				int t_pos = t_strCurrent.find(t_strOne, t_i);

				int t_iUsed = t_strUsed.substr(t_pos, t_strOne.length()).find_first_of("1");

				if (t_iUsed == -1)
				{
					t_strMain.replace(t_pos, t_strOne.length(), t_strTwo);
					t_strCurrentUsed.replace(t_pos, t_strOne.length(), string(t_strTwo.length(), '1'));
				}

				t_i += t_pos + t_strOne.length();
			}

			t_strUsed = t_strCurrentUsed;
			t_strCurrent = t_strMain;
		}

		cout << t_strMain << endl;
	}

	t_file.close();

	return 0;
}
