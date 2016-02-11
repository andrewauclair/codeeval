#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "87.h"

static const char * fsc_pChzName = "Query Board";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/87/";
static const int fsc_nNumber = 87;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP87::CP87()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP87::~CP87()
{
}

int CP87::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strInput;
	string t_str;

	int t_aBoard[256][256];
	for (int t_i = 0; t_i < 256; ++t_i)
	{
		for (int t_j = 0; t_j < 256; ++t_j)
		{
			t_aBoard[t_i][t_j] = 0;
		}
	}

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		string t_strOperation;
		getline(line, t_strOperation, ' ');

		if (t_strOperation == "SetRow")
		{
			int t_i = 0;
			int t_x = 0;
			getline(line, t_str, ' ');
			t_i = atoi(t_str.c_str());
			getline(line, t_str, ' ');
			t_x = atoi(t_str.c_str());

			for (int t_j = 0; t_j < 256; ++t_j)
			{
				t_aBoard[t_i][t_j] = t_x;
			}
		}
		else if (t_strOperation == "SetCol")
		{
			int t_j = 0;
			int t_x = 0;
			getline(line, t_str, ' ');
			t_j = atoi(t_str.c_str());
			getline(line, t_str, ' ');
			t_x = atoi(t_str.c_str());

			for (int t_i = 0; t_i < 256; ++t_i)
			{
				t_aBoard[t_i][t_j] = t_x;
			}
		}
		else if (t_strOperation == "QueryRow")
		{
			int t_i = 0;
			getline(line, t_str, ' ');
			t_i = atoi(t_str.c_str());

			int t_nSum = 0;

			for (int t_j = 0; t_j < 256; ++t_j)
			{
				t_nSum += t_aBoard[t_i][t_j];
			}

			cout << t_nSum << endl;
		}
		else if (t_strOperation == "QueryCol")
		{
			int t_j = 0;
			getline(line, t_str, ' ');
			t_j = atoi(t_str.c_str());

			int t_nSum = 0;

			for (int t_i = 0; t_i < 256; ++t_i)
			{
				t_nSum += t_aBoard[t_i][t_j];
			}

			cout << t_nSum << endl;
		}
	}

	t_file.close();

	return 0;
}
