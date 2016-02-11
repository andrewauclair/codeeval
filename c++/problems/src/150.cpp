#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "150.h"

static const char * fsc_pChzName = "Roman and Arabic";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/150/";
static const int fsc_nNumber = 150;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP150::CP150()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP150::~CP150()
{
}

int CP150::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		
	}

	t_file.close();

	return 0;
}
