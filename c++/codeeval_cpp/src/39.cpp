#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "39cpp.h"

int C39::nNext(int p_nNum)
#else
int nNext(int p_nNum)
#endif
{
	stringstream ss;
	ss << p_nNum;

	string t_str;
	ss >> t_str;

	int t_nNum = 0;

	size_t t_nLen = t_str.length();

	char t_ch = 'a';

	for (size_t t_i = 0; t_i < t_nLen; ++t_i)
	{
		t_ch = t_str[t_i];
		t_nNum += atoi(&t_ch) * atoi(&t_ch);
	}

	return t_nNum;
}

#if _EDITOR

int C39::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nNumber = 0;
	string t_str = "";
	vector<int> t_arynValues = vector<int>();

	bool t_fHappy = true;
	int t_nNext = 0;
	size_t t_nLen = 0;

	while (getline(t_file, t_strInput))
	{
		t_nNumber = atoi(t_strInput.c_str());
		t_arynValues.clear();

		if (t_nNumber == 1)
		{
			cout << "1" << endl;
		}
		else
		{
			t_arynValues.push_back(t_nNumber);

			t_fHappy = true;
			t_nNext = 0;
			t_nLen = 0;

			while (t_fHappy)
			{
				t_nNext = nNext(t_nNumber);

				if (t_nNext == 1)
				{
					cout << "1" << endl;
					t_fHappy = false;
					break;
				}

				t_nLen = t_arynValues.size();

				for (size_t t_i = 0; t_i < t_nLen; ++t_i)
				{
					if (t_arynValues[t_i] == t_nNext)
					{
						// this isn't going to be a happy number
						cout << "0" << endl;
						t_fHappy = false;
					}
				}

				t_nNumber = t_nNext;
				t_arynValues.push_back(t_nNext);
			}
		}
	}

	t_file.close();

	return 0;
}
