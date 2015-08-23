#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "62.h"

static const char * fsc_pChzName = "N Mod M";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/62/";
static const int fsc_nNumber = 62;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP62::CP62()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP62::~CP62()
{
}

int CP62::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nN = 0;
	int t_nM = 0;
	char t_junk;

	while (!t_file.eof())
	{
		t_file >> t_nN >> t_junk >> t_nM;

		cout << t_nN - ((t_nN / t_nM) * t_nM) << endl;
	}

	t_file.close();

	return 0;
}
