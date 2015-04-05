#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int nNext(int p_nNum)
{
	stringstream ss;
	ss << p_nNum;

	string t_str;
	ss >> t_str;

	int t_nNum = 0;

	for (int t_i = 0; t_i < t_str.length(); ++t_i)
	{
		char t_ch = t_str[t_i];
		//cout << ": " << atoi(&t_ch) << endl;
		t_nNum += atoi(&t_ch) * atoi(&t_ch);
	}

	//cout << t_nNum << endl;
	return t_nNum;
}

#if _EDITOR
#include "39.h"
static const char * fsc_pChzName = "Happy Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/39/";
static const int fsc_nNumber = 39;
static const bool fsc_fFinished = false;
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
	t_file.open("39.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_str;

	while (getline(t_file, t_strInput))
	{
		int t_nNumber = atoi(t_strInput.c_str());

		if (t_nNumber == 1)
		{
			cout << endl << "1" << endl;
		}
		else
		{
			vector<int> t_arynValues = vector<int>();

			t_arynValues.push_back(t_nNumber);

			bool t_fHappy = true;
			//cout << t_nNumber << " ";

			while (t_fHappy)
			{
				int t_nNext = nNext(t_nNumber);
	
				//cout << t_nNext << " ";

				if (t_nNext == 1)
				{
					cout << "1" << endl;
					t_fHappy = false;
					break;
				}

				for (int t_i = 0; t_i < t_arynValues.size(); ++t_i)
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
}
