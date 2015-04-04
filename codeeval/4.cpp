#include <iostream>
#include <fstream>
using namespace std;

bool fPrime(int p_nNum)
{
	for (int t_i = 2; t_i < (p_nNum / 2) + 1; ++t_i)
	{
		if (p_nNum % t_i == 0)
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR
#include "4.h"
static const char * fsc_pChzName = "Sum of Primes";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/4/";
static const int fsc_nNumber = 4;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP4::CP4()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP4::~CP4()
{
}
void CP4::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	int t_nNum = 2;
	int t_nPrimes = 0;
	int t_nTotal = 0;

	while (t_nPrimes < 1000)
	{
		if (fPrime(t_nNum))
		{
			t_nPrimes++;
			t_nTotal += t_nNum;
		}

		t_nNum++;
	}

	cout << t_nTotal;
}
