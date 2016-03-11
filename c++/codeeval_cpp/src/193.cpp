#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

#if _EDITOR

#include "193cpp.h"

bool C193::fMagicNumber(int p_nNum)
#else
bool fMagicNumber(int p_nNum)
#endif
{
	stringstream ss;
	ss << p_nNum;
	string t_str = ss.str();
	vector<int> t_acVisits = vector<int>();

	// check if digits repeat, if they do, return false
	for (unsigned int t_i = 0; t_i < t_str.length(); ++t_i)
	{
		t_acVisits.push_back(0);

		if (count(t_str.begin(), t_str.end(), t_str[t_i]) > 1)
		{
			return false;
		}
	}

	// follow the digits in a circle, if we end on the same digit, return true, else false
	int t_c = 0;

	for (unsigned int t_i = 0; t_i < t_str.length(); ++t_i)
	{
		t_acVisits[t_c]++;

		if (t_acVisits[t_c] > 1)
		{
			return false;
		}

		int t_pow = (int)pow(10.0f, (int)(t_str.length() - t_c - 1));
		int t_digit = (p_nNum / t_pow) % 10;

		t_c = (t_c + t_digit) % t_str.length();
	}

	for (unsigned int t_i = 0; t_i < t_acVisits.size(); ++t_i)
	{
		if (t_acVisits[t_i] != 1)
		{
			return false;
		}
	}

	if (t_str[0] != t_str[t_c])
	{
		return false;
	}
	
	return true;
}

#if _EDITOR

int C193::nRun(int argc, const char * argv[])
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
		int t_cMin = 0;
		int t_cMax = 0;
		int t_cMagicNumbers = 0;

		getline(line, t_str, ' ');
		t_cMin = atoi(t_str.c_str());
		getline(line, t_str, ' ');
		t_cMax = atoi(t_str.c_str());

		for (int t_i = t_cMin; t_i <= t_cMax; ++t_i)
		{
			if (fMagicNumber(t_i))
			{
				t_cMagicNumbers++;
				cout << t_i << " ";
			}
		}

		if (t_cMagicNumbers == 0)
		{
			cout << "-1";
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
