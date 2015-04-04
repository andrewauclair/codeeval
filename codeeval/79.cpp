#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#if _EDITOR
#include "79.h"
static const char * fsc_pChzName = "Minesweeper";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/79/";
static const int fsc_nNumber = 79;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;
CP79::CP79()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP79::~CP79()
{
}
void CP79::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("79.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nX;
	int t_nY;
	char t_junk;

	while (!t_file.eof())
	{
		t_file >> t_nY;
		t_file >> t_junk;
		t_file >> t_nX;
		t_file >> t_junk;

		vector<char> t_aryPositions = vector<char>();

		for (int t_i = 0; t_i < t_nY * t_nX; ++t_i)
		{
			t_file >> t_junk;
			t_aryPositions.push_back(t_junk);
		}

		for (int t_i = 0; t_i < t_aryPositions.size(); ++t_i)
		{
			vPrintPos(t_i);
		}

		cout << endl;
	}
}
