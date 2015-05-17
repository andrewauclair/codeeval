#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "73.h"

int CP73::nDecode(const string &p_str, int p_i)
#else
int nDecode(const string &p_str, int p_i)
#endif
{
	int t_c = 0;

	if (p_i >= p_str.length())
	{
		return 1;
	}

	int t_n = p_str[p_i] - '0';

	if (t_n == 0)
	{
		return 0;
	}
	else if (t_n == 1)
	{
		t_c = nDecode(p_str, p_i + 1);

		if (p_i + 1 < p_str.length())
		{
			t_c += nDecode(p_str, p_i + 2);
		}
		return t_c;
	}
	else if (t_n == 2)
	{
		t_c = nDecode(p_str, p_i + 1);

		if (p_i + 1 < p_str.length())
		{
			t_n = p_str[p_i + 1] - '0';

			if (t_n <= 6)
			{
				t_c += nDecode(p_str, p_i + 2);
			}
		}

		return t_c;
	}
	else if (t_n >= 3 && t_n <= 9)
	{
		return nDecode(p_str, p_i + 1);
	}
}

#if _EDITOR

static const char * fsc_pChzName = "Decode Numbers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/73/";
static const int fsc_nNumber = 73;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP73::CP73()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP73::~CP73()
{
}

void CP73::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/73_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		cout << nDecode(t_strInput, 0) << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
