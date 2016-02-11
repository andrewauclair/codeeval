#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <bitset>
using namespace std;

#if _EDITOR

#include "27.h"

static const char * fsc_pChzName = "Decimal to Binary";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/27/";
static const int fsc_nNumber = 27;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP27::CP27()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP27::~CP27()
{
}

int CP27::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		int t_nNum = atoi(t_strInput.c_str());
		bool t_fFirst = false;

		for (int t_i = 31; t_i >= 0; --t_i)
		{
			int t_byte = t_nNum & (1 << t_i);
			t_byte >>= t_i;

			if (!t_byte && !t_fFirst)
			{
				continue;
			}
			else if (t_byte && !t_fFirst)
			{
				t_fFirst = true;
			}

			bitset<32> b(t_byte);

			cout << b[0];
		}

		if (!t_fFirst)
		{
			cout << "0";
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
