#include <iostream>
#include <fstream>
using namespace std;

int fib(int p_nNum)
{
	if (p_nNum < 2)
	{
		return p_nNum;
	}
	
	return fib(p_nNum - 1) + fib(p_nNum - 2);
}

#if _EDITOR
#include "22.h"
static const char * fsc_pChzName = "Fibonacci Series";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/22/";
static const int fsc_nNumber = 22;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP22::CP22()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP22::~CP22()
{
}
void CP22::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("22.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nValue = 0;

	while (!t_file.eof())
	{
		t_file >> t_nValue;

		cout << fib(t_nValue) << endl;
	}
}
