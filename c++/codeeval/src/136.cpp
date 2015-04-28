#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "136.h"

static const char * fsc_pChzName = "Racing Chars";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/136/";
static const int fsc_nNumber = 136;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP136::CP136()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP136::~CP136()
{
}

void CP136::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/136_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nLastPos = -1;

	while (getline(t_file, t_strInput))
	{
		if (t_nLastPos == -1)
		{
			t_nLastPos = t_strInput.find('_');
			t_strInput[t_nLastPos] = '|';
			cout << t_strInput << endl;
			continue;
		}

		int t_nGatePos = t_strInput.find('_');
		int t_nCheckPos = t_strInput.find('C');

		if (t_nCheckPos != std::string::npos)
		{
			if (t_nCheckPos + 1 == t_nLastPos)
			{
				t_strInput[t_nCheckPos] = '/';
				cout << t_strInput << endl;
				t_nLastPos = t_nCheckPos;
				continue;
			}
			else if (t_nCheckPos - 1 == t_nLastPos)
			{
				t_strInput[t_nCheckPos] = '\\';
				cout << t_strInput << endl;
				t_nLastPos = t_nCheckPos;
				continue;
			}
			else if (t_nCheckPos == t_nLastPos)
			{
				t_strInput[t_nCheckPos] = '|';
				cout << t_strInput << endl;
				t_nLastPos = t_nCheckPos;
				continue;
			}
		}

		if (t_nGatePos != std::string::npos)
		{
			if (t_nGatePos + 1 == t_nLastPos)
			{
				t_strInput[t_nGatePos] = '/';
				cout << t_strInput << endl;
				t_nLastPos = t_nGatePos;
				continue;
			}
			else if (t_nGatePos - 1 == t_nLastPos)
			{
				t_strInput[t_nGatePos] = '\\';
				cout << t_strInput << endl;
				t_nLastPos = t_nGatePos;
				continue;
			}
			else if (t_nGatePos == t_nLastPos)
			{
				t_strInput[t_nGatePos] = '|';
				cout << t_strInput << endl;
				t_nLastPos = t_nGatePos;
				continue;
			}
		}
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
