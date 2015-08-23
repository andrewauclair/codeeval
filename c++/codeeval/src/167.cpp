#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "167.h"

static const char * fsc_pChzName = "Read More";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/167/";
static const int fsc_nNumber = 167;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP167::CP167()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP167::~CP167()
{
}

int CP167::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.length() <= 55)
		{
			cout << t_strInput << endl;
		}
		else
		{
			t_str = t_strInput.substr(0, 40);
			int t_nLast = t_str.find_last_of(' ');
			
			if (t_nLast != -1)
			{
				t_str = t_str.substr(0, t_nLast);
			}

			cout << t_str << "... <Read More>" << endl;
		}
	}

	t_file.close();

	return 0;
}
