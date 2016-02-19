#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "100.h"

static const char * fsc_pChzName = "Even Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/100/";
static const int fsc_nNumber = 100;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP100::CP100()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP100::~CP100()
{
}

int CP100::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nValue = 0;

	while (!t_file.eof())
	{
		t_file >> t_nValue;

		if (t_nValue % 2 == 0)
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
