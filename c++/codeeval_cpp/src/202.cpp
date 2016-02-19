#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "202.h"

static const char * fsc_pChzName = "Stepwise Word";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/202/";
static const int fsc_nNumber = 202;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP202::CP202()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP202::~CP202()
{
}

int CP202::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		string t_strLongest = "";

		while (getline(line, t_str, ' '))
		{
			if (t_str.length() > t_strLongest.length())
			{
				t_strLongest = t_str;
			}
		}

		// print in stepwise fashion
		for (unsigned int t_i = 0; t_i < t_strLongest.length(); ++t_i)
		{
			// print *'s for how many we're at in the string
			for (unsigned int t_j = 0; t_j < t_i; ++t_j)
			{
				cout << "*";
			}

			cout << t_strLongest[t_i];

			if (t_i + 1 < t_strLongest.length())
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
