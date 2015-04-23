#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
#if _EDITOR
#include "180.h"
void CP180::vBubbleSort(vector<char> &p_v1, vector<int> &p_v2)
#else
void vBubbleSort(vector<char> &p_v1, vector<int> &p_v2)
#endif
{
	bool t_fSwapped = false;
	
	do
	{
		t_fSwapped = false;

		for (int t_i = 1; t_i < p_v1.size(); ++t_i)
		{
			if (p_v1[t_i] < p_v1[t_i - 1] || (p_v1[t_i] == p_v1[t_i - 1] && p_v2[t_i] < p_v2[t_i - 1]))
			{
				int t_c = p_v1[t_i];
				p_v1[t_i] = p_v1[t_i - 1];
				p_v1[t_i - 1] = t_c;

				int t_n = p_v2[t_i];
				p_v2[t_i] = p_v2[t_i - 1];
				p_v2[t_i - 1] = t_n;

				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR
static const char * fsc_pChzName = "Knight Moves";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/180/";
static const int fsc_nNumber = 180;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;
CP180::CP180()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP180::~CP180()
{
}
void CP180::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("180.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		vector<char> t_aLetter = vector<char>();
		vector<int> t_aNumber = vector<int>();

		char t_char = t_strInput[0];
		int t_num = atoi(t_strInput.substr(1,1).c_str());

		t_aLetter.push_back(t_char - 2);
		t_aNumber.push_back(t_num - 1);

		t_aLetter.push_back(t_char - 2);
		t_aNumber.push_back(t_num + 1);

		t_aLetter.push_back(t_char - 1);
		t_aNumber.push_back(t_num + 2);

		t_aLetter.push_back(t_char - 1);
		t_aNumber.push_back(t_num - 2);

		t_aLetter.push_back(t_char + 1);
		t_aNumber.push_back(t_num + 2);
		
		t_aLetter.push_back(t_char + 1);
		t_aNumber.push_back(t_num - 2);

		t_aLetter.push_back(t_char + 2);
		t_aNumber.push_back(t_num - 1);

		t_aLetter.push_back(t_char + 2);
		t_aNumber.push_back(t_num + 1);
		
		

		// strip out the ones that outside of a-h or 1-8
		for (int t_i = 0; t_i < t_aLetter.size(); ++t_i)
		{
			if (t_aLetter[t_i] < 'a' || t_aLetter[t_i] > 'h')
			{
				t_aLetter.erase(t_aLetter.begin() + t_i);
				t_aNumber.erase(t_aNumber.begin() + t_i);
				t_i--;
			}
			else if (t_aNumber[t_i] < 1 || t_aNumber[t_i] > 8)
			{
				t_aLetter.erase(t_aLetter.begin() + t_i);
				t_aNumber.erase(t_aNumber.begin() + t_i);
				t_i--;
			}
		}

		vBubbleSort(t_aLetter, t_aNumber);

		for (int t_i = 0; t_i < t_aLetter.size(); ++t_i)
		{
			cout << t_aLetter[t_i] << t_aNumber[t_i];

			if (t_i + 1 < t_aLetter.size())
			{
				cout << " ";
			}
		}

		cout << endl;
	}
}
