#include <iostream>
#include <fstream>
using namespace std;

#if _EDITOR

#include "22.h"

int CP22::fib(int p_nNum)
#else
int fib(int p_nNum)
#endif
{
	if (p_nNum < 2)
	{
		return p_nNum;
	}
	
	return fib(p_nNum - 1) + fib(p_nNum - 2);
}

#if _EDITOR

static const char * fsc_pChzName = "Fibonacci Series";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/22/";
static const int fsc_nNumber = 22;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP22::CP22()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP22::~CP22()
{
}

int CP22::nRun(int argc, const char * argv[])
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

		cout << fib(t_nValue) << endl;
	}

	t_file.close();

	return 0;
}
