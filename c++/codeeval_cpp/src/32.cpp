#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "32.h"

static const char * fsc_pChzName = "Trailing String";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/32/";
static const int fsc_nNumber = 32;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP32::CP32()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP32::~CP32()
{
}

int CP32::nRun(int argc, const char * argv[])
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

		getline(line, t_str, ',');
		string t_strLine = t_str;
		getline(line, t_str, ',');

		if (t_str.length() <= t_strLine.length() && t_strLine.substr(t_strLine.length() - t_str.length(), t_str.length()) == t_str)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}

	t_file.close();

	return 0;
}
