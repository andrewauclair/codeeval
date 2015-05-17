#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

#if _EDITOR

#include "144.h"

static const char * fsc_pChzName = "Digit Statistics";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/144/";
static const int fsc_nNumber = 144;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;

CP144::CP144()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP144::~CP144()
{
}

void CP144::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/144_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_a;
	unsigned long t_n;
	string t_str;
	vector<unsigned long> t_aPattern = vector<unsigned long>();

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_str, ' ');
		t_a = atoi(t_str.c_str());
		getline(line, t_str, ' ');
		t_n = strtoul(t_str.c_str(), NULL, 0);

		t_aPattern.push_back(t_a);

		int t_i = 0;

		do
		{
			if (t_i >= t_n)
			{
				break;
			}

			t_aPattern.push_back((int)pow(t_a, (float)2 + t_i) % 10);
			t_i++;
		}
		while (t_aPattern[t_i] != t_aPattern[0]);

		int t_j = 0;

		unsigned long t_ac[10] = {0,0,0,0,0,0,0,0,0,0};

		int t_cpattern = t_n / t_aPattern.size();
		int t_cmod = t_n % t_aPattern.size();

		for (t_i = 0; t_i < t_aPattern.size(); ++t_i)
		{
			t_ac[t_aPattern[t_i]] += t_cpattern;

			if (t_i < t_cmod)
			{
				t_ac[t_aPattern[t_i]]++;
			}
		}

		for (t_i = 0; t_i < 10; ++t_i)
		{
			cout << t_i << ": " << t_ac[t_i];
			if (t_i < 9)
			{
				cout << ", ";
			}
		}

		cout << endl;

		t_aPattern.clear();
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
