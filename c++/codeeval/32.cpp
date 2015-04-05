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
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;
CP32::CP32()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP32::~CP32()
{
}
void CP32::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("32.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

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
}
