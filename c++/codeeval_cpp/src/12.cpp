#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "12.h"

static const char * fsc_pChzName = "First Non-Repeated Character";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/12/";
static const int fsc_nNumber = 12;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP12::CP12()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP12::~CP12()
{
}

int CP12::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			size_t t_c = count(t_strInput.begin(), t_strInput.end(), t_strInput[t_i]);

			if (t_c > 1)
			{
				char t_char = t_strInput[t_i];
				t_strInput.erase(remove(t_strInput.begin(), t_strInput.end(), t_char), t_strInput.end());
				t_i = 0;
			}
		}

		cout << t_strInput[0] << endl;
	}

	t_file.close();

	return 0;
}
