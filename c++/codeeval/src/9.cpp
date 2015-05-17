#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "9.h"

static const char * fsc_pChzName = "Stack Implementation";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/9/";
static const int fsc_nNumber = 9;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP9::CP9()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP9::~CP9()
{
}

void CP9::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/9_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	vector<string> t_aStrValues = vector<string>();
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			t_aStrValues.push_back(t_str);
		}

		for (int t_i = t_aStrValues.size() - 1; t_i >= 0; t_i -= 2)
		{
			cout << t_aStrValues[t_i] << " ";
		}

		t_aStrValues.clear();

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
