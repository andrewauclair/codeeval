#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "106.h"

void CP106::vRomanNumeral(int p_nNum)
#else
void vRomanNumeral(int p_nNum)
#endif
{
	if (p_nNum >= 1000)
	{
		for (int t_i = 0; t_i < p_nNum / 1000; ++t_i)
		{
			cout << "M";
		}
		p_nNum -= 1000 * (p_nNum / 1000);
	}

	if (p_nNum >= 900)
	{
		cout << "CM";
		p_nNum -= 900;
	}

	if (p_nNum >= 500)
	{
		for (int t_i = 0; t_i < p_nNum / 500; ++t_i)
		{
			cout << "D";
		}
		p_nNum -= 500 * (p_nNum / 500);
	}

	if (p_nNum >= 400)
	{
		cout << "CD";
		p_nNum -= 400;
	}

	if (p_nNum >= 100)
	{
		for (int t_i = 0; t_i < p_nNum / 100; ++t_i)
		{
			cout << "C";
		}
		p_nNum -= 100 * (p_nNum / 100);
	}

	if (p_nNum >= 90)
	{
		cout << "XC";
		p_nNum -= 90;
	}

	if (p_nNum >= 50)
	{
		for (int t_i = 0; t_i < p_nNum / 50; ++t_i)
		{
			cout << "L";
		}
		p_nNum -= 50 * (p_nNum / 50);
	}

	if (p_nNum >= 40)
	{
		cout << "XL";
		p_nNum -= 40;
	}

	if (p_nNum >= 10)
	{
		for (int t_i = 0; t_i < p_nNum / 10; ++t_i)
		{
			cout << "X";
		}
		p_nNum -= 10 * (p_nNum / 10);
	}

	if (p_nNum >= 9)
	{
		cout << "IX";
		p_nNum -= 9;
	}

	if (p_nNum >= 5)
	{
		for (int t_i = 0; t_i < p_nNum / 5; ++t_i)
		{
			cout << "V";
		}
		p_nNum -= 5 * (p_nNum / 5);
	}

	if (p_nNum >= 4)
	{
		cout << "IV";
		p_nNum -= 4;
	}

	for (int t_i = 0; t_i < p_nNum; ++t_i)
	{
		cout << "I";
	}
}

#if _EDITOR

static const char * fsc_pChzName = "Roman Numerals";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/106/";
static const int fsc_nNumber = 106;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP106::CP106()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP106::~CP106()
{
}

int CP106::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nValue;

	while (!t_file.eof())
	{
		t_file >> t_nValue;

		vRomanNumeral(t_nValue);
		cout << endl;
	}

	t_file.close();

	return 0;
}
