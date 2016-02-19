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
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP9::CP9()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP9::~CP9()
{
}

int CP9::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

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

	return 0;
}
