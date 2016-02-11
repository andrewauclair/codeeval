#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "128.h"

static const char * fsc_pChzName = "Compressed Sequence";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/128/";
static const int fsc_nNumber = 128;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP128::CP128()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP128::~CP128()
{
}

int CP128::nRun(int argc, const char * argv[])
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

		int t_nNum = -1;
		int t_nOcc = 0;

		while (getline(line, t_str, ' '))
		{
			if (atoi(t_str.c_str()) != t_nNum)
			{
				if (t_nNum != -1)
				{
					cout << t_nOcc << " " << t_nNum << " ";
				}
				t_nNum = atoi(t_str.c_str());
				t_nOcc = 1;
			}
			else
			{
				t_nOcc++;
			}
		}

		cout << t_nOcc << " " << t_nNum << endl;
	}

	t_file.close();

	return 0;
}