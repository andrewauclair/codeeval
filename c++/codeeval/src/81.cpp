#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "81.h"

int CP81::nFactorial(int p_nNum)
#else
int nFactorial(int p_nNum)
#endif
{
	int t_n = 1;

	for (int t_i = 1; t_i <= p_nNum; ++t_i)
	{
		t_n *= t_i;
	}

	return t_n;
}

#if _EDITOR

static const char * fsc_pChzName = "Sum to Zero";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/81/";
static const int fsc_nNumber = 81;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP81::CP81()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP81::~CP81()
{
}

void CP81::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/81_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	vector<int> t_aValues = vector<int>();
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		
		while (getline(line, t_str, ','))
		{
			t_aValues.push_back(atoi(t_str.c_str()));
		}

		// find the number of combos of 4 in this vector
		int t_c = (nFactorial(t_aValues.size())) / (nFactorial(4) / (float)nFactorial(t_aValues.size() - 4));

		t_aValues.clear();
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
