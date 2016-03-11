#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

#if _EDITOR

#include "45cpp.h"

bool C45::isPalindrome(string p_str)
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

int C45::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		int t_c = 0;
		while (!isPalindrome(t_strInput))
		{
			int t_n1 = atoi(t_strInput.c_str());
			reverse(t_strInput.begin(), t_strInput.end());

			int t_n2 = atoi(t_strInput.c_str());

			stringstream t_ss;

			t_ss << t_n1 + t_n2;
			t_strInput = t_ss.str();

			t_c++;
		}

		cout << t_c << " " << t_strInput << endl;
	}

	t_file.close();

	return 0;
}
