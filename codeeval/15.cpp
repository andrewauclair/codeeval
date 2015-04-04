#include <iostream>
#include <fstream>
using namespace std;
#if _EDITOR
#include "15.h"
static const char * fsc_pChzName = "Endianness";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/15/";
static const int fsc_nNumber = 15;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Nil;
CP15::CP15()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP15::~CP15()
{
}
void CP15::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	int t_nNum = 1;

	if (*(char*)&t_nNum == 1)
	{
		cout << "LittleEndian";
	}
	else
	{
		cout << "BigEndian";
	}
}
