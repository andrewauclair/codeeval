#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "47.h"

bool CP47::isPalindrome(string p_str)
#else
bool isPalindrome(string p_str)
#endif
{
	for (unsigned int t_i = 0; t_i < p_str.length() / 2; ++t_i)
	{
		if (p_str[t_i] != p_str[p_str.length() - 1 - t_i])
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR

static const char * fsc_pChzName = "Palindromic Ranges";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/47/";
static const int fsc_nNumber = 47;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;

CP47::CP47()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP47::~CP47()
{
}

int CP47::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_l = 0;
	int t_r = 0;
	int t_len = 0;
	int t_cInteresting = 0;
	stringstream t_ss;

	vector<string> t_aValues = vector<string>();
	vector<bool> t_afPalindromes = vector<bool>();

	while (!t_file.eof())
	{
		t_file >> t_l;
		t_file >> t_r;

		for (int t_i = t_l; t_i <= t_r; ++t_i)
		{
			t_ss << t_i;
			t_aValues.push_back(t_ss.str());
			t_afPalindromes.push_back(isPalindrome(t_ss.str()));
			t_ss.str("");
		}

		for (unsigned int t_i = 1; t_i <= t_aValues.size(); ++t_i)
		{
			for (unsigned int t_j = 0; t_j <= t_aValues.size() - t_i; ++t_j)
			{
				int t_cPalindromes = 0;
				for (unsigned int t_k = t_j; t_k < t_j + t_i; ++t_k)
				{
					if (t_afPalindromes[t_k])
					{
						t_cPalindromes++;
					}
				}

				if (t_cPalindromes % 2 == 0)
				{
					t_cInteresting++;
				}
			}
		}

		cout << t_cInteresting << endl;

		t_aValues.clear();
		t_afPalindromes.clear();
		t_cInteresting = 0;
	}

	t_file.close();

	return 0;
}
