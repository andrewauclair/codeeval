#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "39.h"

int CP39::nNext(int p_nNum)
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

static const char * fsc_pChzName = "Happy Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/39/";
static const int fsc_nNumber = 39;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP39::CP39()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP39::~CP39()
{
}

void CP39::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/in/39_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

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

#if !_EDITOR
	return 0;
#endif
}
