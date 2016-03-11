#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "3cpp.h"

bool C3::isPrime(long int p_nNum)
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
bool C3::isPalindrome(string p_str)
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

int C3::nRun(int argc, const char * argv[])
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

	return 0;
}
