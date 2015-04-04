#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
#if _EDITOR
#include "92.h"
static const char * fsc_pChzName = "Penultimate Word";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/92/";
static const int fsc_nNumber = 92;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP92::CP92()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP92::~CP92()
{
}
void CP92::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
#if _EDITOR
	t_file.open("92.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_strLast;
	string t_strInput;
	string t_str;

	while (!t_file.eof())
	{
		getline(t_file, t_strInput);

		istringstream line(t_strInput);

		vector<string> t_aryLines = vector<string>();
		while (getline(line, t_str, ' '))
		{
			t_aryLines.push_back(t_str);
		}

		if (t_aryLines.size() > 1)
		{
			cout << t_aryLines[t_aryLines.size() - 2] << endl;
		}
	}
}
