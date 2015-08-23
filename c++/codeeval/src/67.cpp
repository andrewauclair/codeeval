#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "67.h"

static const char * fsc_pChzName = "Hex to Decimal";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/67/";
static const int fsc_nNumber = 67;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP67::CP67()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP67::~CP67()
{
}

int CP67::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_xHex = -1;

	while (!t_file.eof())
	{
		if (t_xHex != -1)
		{
			cout << endl;
		}

		t_file >> hex >> t_xHex;

		cout << t_xHex;
	}

	t_file.close();

	return 0;
}
