#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <stdlib.h>
using namespace std;
#if _EDITOR
#include "44.h"

void CP44::vBubbleSort(vector<string> &p_vector)
#else
void vBubbleSort(vector<string> &p_vector)
#endif
{
	bool t_fSwapped = false;

	do
	{
		t_fSwapped = false;

		for (int t_i = 1; t_i < p_vector.size(); ++t_i)
		{
			if (p_vector[t_i].compare(p_vector[t_i - 1]) < 0)
			{
				string t_str = p_vector[t_i];
				p_vector[t_i] = p_vector[t_i - 1];
				p_vector[t_i - 1] = t_str;
				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR
vector<string> CP44::aryGetPermutations(string p_strNum)
#else
vector<string> aryGetPermutations(string p_strNum)
#endif
{
	vector<string> t_aryStrPerms = vector<string>();

	for (int t_i = 0; t_i < p_strNum.length(); ++t_i)
	{
		t_aryStrPerms.push_back(p_strNum.substr(t_i, p_strNum.length() - t_i) + p_strNum.substr(0, t_i));
	}

	vBubbleSort(t_aryStrPerms);
	
	return t_aryStrPerms;
}

#if _EDITOR
static const char * fsc_pChzName = "Following Integer";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/44/";
static const int fsc_nNumber = 44;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;
CP44::CP44()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP44::~CP44()
{
}
void CP44::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("44.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		string t_strNum = string(t_strInput);
		// we need to get the next permutation of this number
		// if we can't find a higher one with the same numbers we just add a 0 into the mix
		// so 115 would become 1150
		bool t_fFound = false;

		do
		{
			vector<string> t_aryStrPerms = aryGetPermutations(t_strInput);

			for (int t_i = 0; t_i < t_aryStrPerms.size(); ++t_i)
			{
				if (atoi(t_aryStrPerms[t_i].c_str()) > atoi(t_strNum.c_str()))
				{
					t_fFound = true;
					cout << t_aryStrPerms[t_i] << endl;
					break;
				}
			}
			if (!t_fFound)
			{
				t_strInput+= "0";
			}
		} while (!t_fFound);
	}
}
