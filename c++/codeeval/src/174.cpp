#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "174.h"

static const char * fsc_pChzName = "Slang Flavor";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/174/";
static const int fsc_nNumber = 174;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP174::CP174()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP174::~CP174()
{
}

void CP174::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/174_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_aSlang[8] =
	{
		", yeah!",
		", this is crazy, I tell ya.",
		", can U believe this?",
		", eh?",
		", aw yea.",
		", yo.",
		"? No way!",
		". Awesome!"
	};

	
	int t_cPunc = 0;
	int t_cSlang = 0;

	while (getline(t_file, t_strInput))
	{
		bool t_fIgnore = false;

		for (int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			if ((t_strInput[t_i] == '.' || t_strInput[t_i] == '!' || t_strInput[t_i] == '?') && !t_fIgnore)
			{
				t_cPunc++;

				// insert some slang
				if (t_cPunc % 2 == 0)
				{
					t_strInput.erase(t_i, 1);
					t_strInput.insert(t_i, t_aSlang[t_cSlang]);
					t_i += t_aSlang[t_cSlang].length();
					t_cSlang++;
					if (t_cSlang > 7) t_cSlang = 0;
					
				}
			}
			t_fIgnore = false;
		}

		cout << t_strInput << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
