#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR
#include "8.h"
static const char * fsc_pChzName = "Reverse Words";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/8/";
static const int fsc_nNumber = 8;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Nil;
CP8::CP8()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP8::~CP8()
{
}
void CP8::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
#if _EDITOR
	t_file.open("8.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		vector<string> t_arystrs = vector<string>();

		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			t_arystrs.push_back(t_str);
		}

		cout << t_arystrs[t_arystrs.size()-1];
		for (int t_i = t_arystrs.size() - 2; t_i >= 0; --t_i)
		{
			cout << " " << t_arystrs[t_i];
		}
		cout << endl;
	}
}
