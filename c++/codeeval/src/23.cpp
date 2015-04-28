#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

#if _EDITOR

#include "23.h"
static const char * fsc_pChzName = "Multiplication Tables";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/23/";
static const int fsc_nNumber = 23;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP23::CP23()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
	m_fInputRequired = false;
}

CP23::~CP23()
{
}

void CP23::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	for (int t_i = 1; t_i <= 12; ++t_i)
	{
		if (t_i > 1) cout << endl;

		cout << setw(0) << setfill(' ') << t_i;

		for (int t_j = 2; t_j <= 12; ++t_j)
		{
			cout << setw(4) << t_i * t_j; 
		}
	}

#if !_EDITOR
	return 0;
#endif
}
