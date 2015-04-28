#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

#if _EDITOR

#include "166.h"

static const char * fsc_pChzName = "Delta Time";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/166/";
static const int fsc_nNumber = 166;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP166::CP166()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP166::~CP166()
{
}

void CP166::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/166_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		replace(t_strInput.begin(), t_strInput.end(), ':', ' ');

		int t_aValues[6];
		istringstream line(t_strInput);
		string t_str;

		for (int t_i = 0; t_i < 6; ++t_i)
		{
			getline(line, t_str, ' ');
			t_aValues[t_i] = atoi(t_str.c_str());
		}

		int t_nHours = t_aValues[0] - t_aValues[3];
		int t_nMinutes = t_aValues[1] - t_aValues[4];
		int t_nSeconds = t_aValues[2] - t_aValues[5];

		t_nSeconds = abs((t_nHours * 3600) + (t_nMinutes * 60) + t_nSeconds);
		t_nHours = t_nSeconds / 3600;
		t_nSeconds -= t_nHours * 3600;
		t_nMinutes = t_nSeconds / 60;
		t_nSeconds -= t_nMinutes * 60;

		cout << setfill('0') << setw(2) << t_nHours << ":";
		cout << setfill('0') << setw(2) << t_nMinutes << ":";
		cout << setfill('0') << setw(2) << t_nSeconds << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
