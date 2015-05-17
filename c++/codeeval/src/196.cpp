#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "196.h"

static const char * fsc_pChzName = "Swap Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/196/";
static const int fsc_nNumber = 196;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP196::CP196()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP196::~CP196()
{
}

void CP196::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/196_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			char t_char = t_str[0];
			t_str[0] = t_str[t_str.length() - 1];
			t_str[t_str.length() - 1] = t_char;

			cout << t_str << " ";
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
