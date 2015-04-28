#include <iostream>

#if _EDITOR

#include "25.h"
static const char * fsc_pChzName = "Odd Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/25/";
static const int fsc_nNumber = 25;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP25::CP25()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
	m_fInputRequired = false;
}

CP25::~CP25()
{
}

void CP25::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	unsigned int t_i = 1;
	for (t_i = 1; t_i < 100; t_i += 2)
	{
		std::cout << t_i << std::endl;
	}

#if !_EDITOR
	return 0;
#endif
}
