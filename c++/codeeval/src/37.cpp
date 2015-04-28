#include <iostream>
#include <fstream>
#include <string>
#include <locale>
using namespace std;

#if _EDITOR

#include "37.h"

static const char * fsc_pChzName = "Pangrams";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/37/";
static const int fsc_nNumber = 37;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP37::CP37()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP37::~CP37()
{
}

void CP37::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/37_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
	
	std::locale loc;

	while (getline(t_file, t_strInput))
	{
		// convert it to lower so we don't care
		for (string::size_type t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			t_strInput[t_i] = tolower(t_strInput[t_i], loc);
		}

		string t_strMissing = "";

		for (int t_i = 'a' + 0; t_i <= 'z' + 0; ++t_i)
		{
			char t_ch = (char)t_i;

			if (t_strInput.find_first_of(t_ch) == -1)
			{
				t_strMissing += t_ch;
			}
		}

		if (t_strMissing.compare("") == 0)
		{
			cout << "NULL" << endl;
		}
		else
		{
			cout << t_strMissing << endl;
		}
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
