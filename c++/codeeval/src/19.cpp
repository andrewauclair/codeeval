#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "19.h"

static const char * fsc_pChzName = "Bit Positions";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/19/";
static const int fsc_nNumber = 19;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP19::CP19()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP19::~CP19()
{
}

int CP19::nRun(int argc, const char * argv[])
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

		int t_nNum = 0;
		int t_nP1 = 0;
		int t_nP2 = 0;

		getline(line, t_str, ',');
		t_nNum = atoi(t_str.c_str());
		getline(line, t_str, ',');
		t_nP1 = atoi(t_str.c_str());
		getline(line, t_str, ',');
		t_nP2 = atoi(t_str.c_str());

		int t_aPos[32];

		for (int t_i = 0; t_i < 32; ++t_i)
		{
			int t_n = t_nNum & (1 << t_i);

			if (t_n > 0)
			{
				t_aPos[t_i] = 1;
			}
			else
			{
				t_aPos[t_i] = 0;
			}
		}

		if (t_aPos[t_nP1 - 1] == t_aPos[t_nP2 - 1])
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}

	t_file.close();

	return 0;
}
