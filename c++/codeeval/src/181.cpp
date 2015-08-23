#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "181.h"

static const char * fsc_pChzName = "Gronsfeld Cipher";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/181/";
static const int fsc_nNumber = 181;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP181::CP181()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP181::~CP181()
{
}

int CP181::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_strAlphabet = " !\"#$%&'()*+,-./0123456789:<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (getline(t_file, t_strInput))
	{
		vector<int> t_aryPos = vector<int>();

		istringstream line(t_strInput);
		string t_str;

		getline(line, t_str, ';');

		for (int t_i = 0; t_i < t_str.length(); ++t_i)
		{
			t_aryPos.push_back(atoi(t_str.substr(t_i, 1).c_str()));
		}

		getline(line, t_str, ';');

		for (int t_i = 0; t_i < t_str.length(); ++t_i)
		{
			int t_iCur = t_strAlphabet.find(t_str[t_i]);
			int t_iDiff = t_aryPos[t_i % t_aryPos.size()];
			int t_iNew = t_iCur - t_iDiff;
			if (t_iNew < 0)
			{
				t_iNew = t_strAlphabet.length() - (t_iNew * -1);
			}
			cout << t_strAlphabet.substr(t_iNew, 1);
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
