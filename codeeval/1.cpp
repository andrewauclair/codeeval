#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "1.h"

static const char * fsc_pChzName = "Fizz Buzz";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/1/";
static const int fsc_nNumber = 1;

CP1::CP1()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber)
{
}

CP1::~CP1()
{
}

void CP1::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("1.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

	}
}
