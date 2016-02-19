#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "83.h"

static const char * fsc_pChzName = "Beautiful Strings";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/83/";
static const int fsc_nNumber = 83;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP83::CP83()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP83::~CP83()
{
}

int CP83::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		int t_aChars[26];
	
		for (int t_i = 0; t_i < 26; ++t_i)
		{
			t_aChars[t_i] = 0;
		}

		int t_nValue = 0;

		for (unsigned int t_i = 0; t_i < t_strInput.size(); ++t_i)
		{
			char t_ch = t_strInput[t_i];

			if ((int)t_ch >= 97 && (int)t_ch <= 122)
			{
				int t_n = ((int)t_ch - 97);
				t_aChars[t_n]++;
			}
			else if ((int)t_ch >= 65 && (int)t_ch <= 90)
			{
				int t_n = ((int)t_ch - 65);
				t_aChars[t_n]++;
			}
		}

		int t_nBiggest = -1;
		int t_nIndex = 0;
		int t_nBeauty = 26;

		do
		{
			t_nBiggest = -1;
			t_nIndex = 0;

			for (int t_i = 0; t_i < 26; ++t_i)
			{
				if (t_aChars[t_i] > t_nBiggest && t_aChars[t_i] > 0)
				{
					t_nBiggest = t_aChars[t_i];
					t_nIndex = t_i;
				}
			}

			if (t_nBiggest > -1)
			{
				t_nValue += t_nBiggest * t_nBeauty;
				t_nBeauty--;
				t_aChars[t_nIndex] = 0;
			}
		}
		while (t_nBiggest > -1);

		cout << t_nValue << endl;
	}

	t_file.close();

	return 0;
}
