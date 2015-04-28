#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "102.h"

static const char * fsc_pChzName = "JSON Menu IDs";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/102/";
static const int fsc_nNumber = 102;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP102::CP102()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP102::~CP102()
{
}

void CP102::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/102_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
	
	while (getline(t_file, t_strInput))
	{
		if (t_strInput == "")
		{
			continue;
		}

		int t_nSum = 0;

		for (int t_i = 0; t_i < t_strInput.size() - 1; ++t_i)
		{
			if (t_strInput.substr(t_i, 2) == "id")
			{
				// see if there is a , or a } after the number
				bool t_fFound = false;
				bool t_fHasLabel = false;
				int t_j = t_i + 2;
				while (!t_fFound)
				{
					if (t_strInput[t_j] == ',')
					{
						t_fHasLabel = true;
						t_fFound = true;
					}
					else if (t_strInput[t_j] == '}')
					{
						t_fFound = true;
					}

					t_j++;
				}

				if (t_fHasLabel)
				{
					t_nSum += atoi(t_strInput.substr(t_i + 5, t_j - 1).c_str());
				}
			}
		}

		cout << t_nSum << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
