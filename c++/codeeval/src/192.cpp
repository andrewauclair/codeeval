#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

#if _EDITOR

#include "192.h"

static const char * fsc_pChzName = "Compare Points";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/192/";
static const int fsc_nNumber = 192;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP192::CP192()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP192::~CP192()
{
}

int CP192::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_o = 0;
	int t_p = 0;
	int t_q = 0;
	int t_r = 0;

	while (!t_file.eof())
	{
		t_file >> t_o;
		t_file >> t_p;
		t_file >> t_q;
		t_file >> t_r;

		if (t_o == t_q && t_p == t_r)
		{
			cout << "here" << endl;
		}
		else
		{
			int t_x = t_q - t_o;
			int t_y = t_r - t_p;

			if (t_y == 0 && t_x > 0)
			{
				cout << "E" << endl;
			}
			else if (t_y == 0 && t_x < 0)
			{
				cout << "W" << endl;
			}
			else if (t_x == 0 && t_y > 0)
			{
				cout << "N" << endl;
			}
			else if (t_x == 0 && t_y < 0)
			{
				cout << "S" << endl;
			}
			else if (t_x < 0 && t_y < 0)
			{
				cout << "SW" << endl;
			}
			else if (t_x > 0 && t_y < 0)
			{
				cout << "SE" << endl;
			}
			else if (t_x < 0 && t_y > 0)
			{
				cout << "NW" << endl;
			}
			else if (t_x > 0 && t_y > 0)
			{
				cout << "NE" << endl;
			}
		}
	}

	t_file.close();

	return 0;
}
