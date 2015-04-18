#include <iostream>
#include <fstream>
#include <cstdint>
#include <string>
#include <sstream>
using namespace std;
#if _EDITOR
#include "179.h"
static const char * fsc_pChzName = "Broken LCD";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/179/";
static const int fsc_nNumber = 179;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;
CP179::CP179()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP179::~CP179()
{
}
void CP179::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("179.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	uint8_t t_anNumbers[10] = 
	{ 
		252,	// 0 
		96,		// 1 
		218,	// 2
		242,	// 3
		102,	// 4
		182,	// 5
		190,	// 6
		224,	// 7
		254,	// 8
		246		// 9
	};

	uint8_t t_anDisplays[12];
	string t_str;

	for (int t_i = 0; t_i < 12; ++t_i)
	{
		t_anDisplays[t_i] = 0;
	}

	while (getline(t_file, t_strInput))
	{
		for (int t_i = 0; t_i < 12; ++t_i)
		{
			t_anDisplays[t_i] = 0;
		}

		istringstream line(t_strInput);
		string t_strDisplays;
		string t_strValue;
		getline(line, t_strDisplays, ';');
		getline(line, t_strValue, ';');
		istringstream line2(t_strDisplays);
		int t_iDisplay = 0;

		while (getline(line2, t_str, ' '))
		{
			for (int t_i = 0; t_i < 8; ++t_i)
			{
				int one = t_str[t_i] - '0';

				t_anDisplays[t_iDisplay] |= one << (8 - t_i);
			}
			t_iDisplay++;
		}
		bool t_fCorrect = true;
		int t_id = 0;
		for (int t_i = 0; t_i < t_strValue.length(); ++t_i)
		{
			if (t_strValue[t_i] == '.')
			{
				continue;
			}
			else
			{
				bool t_fPeriod = false;
				if (t_i + 1 < t_strValue.length())
				{
					if (t_strValue[t_i + 1] == '.')
					{
						t_fPeriod = true;
					}
				}

				int n = t_strValue[t_i] - '0';
				int num = t_anNumbers[n];
				int cor = t_anDisplays[t_id];
				if (t_fPeriod)
				{
					num |= 1;
				}

				int v = cor & num;
				if (v != num)
				{
					// something can't be displayed
					t_fCorrect = false;
					break;
				}

				t_id++;
			}

		}

		if (t_fCorrect)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
}
