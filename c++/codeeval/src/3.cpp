#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "3.h"

bool CP3::isPrime(long int p_nNum)
#else
bool isPrime(long int p_nNum)
#endif
{
	for (long int t_i = 2; t_i < (p_nNum / 2) + 1; ++t_i)
	{
		if (p_nNum % t_i == 0 && p_nNum != t_i)
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR
bool CP3::isPalindrome(string p_str)
#else
bool isPalindrome(string p_str)
#endif
{
	for (int t_i = 0; t_i < p_str.length() / 2; ++t_i)
	{
		if (p_str[t_i] != p_str[p_str.length() - 1 - t_i])
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR

static const char * fsc_pChzName = "Prime Palindrome";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/3/";
static const int fsc_nNumber = 3;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP3::CP3()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
	m_fInputRequired = false;
}

CP3::~CP3()
{
}

void CP3::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	stringstream ss;

	for (int t_i = 999; t_i > 0; --t_i)
	{
		if (isPrime(t_i))
		{
			ss << t_i;
			string t_str;
			t_str = ss.str();

			if (isPalindrome(t_str))
			{
				cout << t_str << endl;
				break;
			}

			ss.str("");
		}
	}

#if !_EDITOR
	return 0;
#endif
}