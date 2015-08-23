#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;

#if _EDITOR

#include "54.h"

static const char * fsc_pChzName = "Cash Register";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/54/";
static const int fsc_nNumber = 54;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP54::CP54()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP54::~CP54()
{
}

int CP54::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_aStrNames[12] = { "PENNY", "NICKEL", "DIME", "QUARTER", "HALF DOLLAR", "ONE", "TWO", "FIVE", "TEN", "TWENTY", "FIFTY", "ONE HUNDRED" };
	int t_anValues[12] = { 1, 5, 10, 25, 50, 100, 200, 500, 1000, 2000, 5000, 10000 };

	string t_str;

	while (getline(t_file, t_strInput))
	{
		bool t_fUsed[12] = { false, false, false, false, false, false, false, false, false, false, false, false };

		if (t_strInput.empty())
		{
			continue;
		}
		
		istringstream line(t_strInput);

		getline(line, t_str, ';');
		float t_rPP = atof(t_str.c_str());
		getline(line, t_str, ';');
		float t_rCH = atof(t_str.c_str());

		if (t_rPP > t_rCH)
		{
			cout << "ERROR";
		}
		else if (t_rPP == t_rCH)
		{
			cout << "ZERO";
		}
		else
		{
			bool t_fChanged = false;
			bool t_fFirst = true;
			float t_rdt = t_rCH - t_rPP;
			int t_dt = floor(t_rdt * 100.0f + .5f);

			do
			{
				t_fChanged = false;

				for (int t_i = 11; t_i >= 0; --t_i)
				{
					if (t_dt >= t_anValues[t_i])
					{
						t_dt -= t_anValues[t_i];

						//if (!t_fUsed[t_i])
						{
							if (!t_fFirst)
							{
								cout << ",";

							}
						
							t_fFirst = false;
						
							cout << t_aStrNames[t_i];

							t_fUsed[t_i] = true;
						}

						t_fChanged = true;
						break;
					}
				}
			} while (t_fChanged);
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
