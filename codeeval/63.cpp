#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR
#include "63.h"
bool CP63::isPrime(long int p_nNum)
#else
bool isPrime(long int p_nNum)
#endif
{
	for (int t_i = 2; t_i < (p_nNum / 2) + 1; ++t_i)
	{
		if (p_nNum % t_i == 0 && p_nNum != t_i)
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR

static const char * fsc_pChzName = "Counting Primes";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/63/";
static const int fsc_nNumber = 63;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;
CP63::CP63()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP63::~CP63()
{
}
void CP63::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("63.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
	
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_str, ',');
		int t_nN = atoi(t_str.c_str());

		getline(line, t_str, ',');
		int t_nM = atoi(t_str.c_str());

		int t_nPrimes = 0;

		for (int t_i = t_nN; t_i <= t_nM; ++t_i)
		{
			if (isPrime(t_i))
			{
				t_nPrimes++;
			}
		}

		cout << t_nPrimes << endl;
	}
}
