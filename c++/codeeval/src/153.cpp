#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "153.h"

static const char * fsc_pChzName = "Locks";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/153/";
static const int fsc_nNumber = 153;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP153::CP153()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP153::~CP153()
{
}

void CP153::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/153_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		istringstream t_line(t_strInput);

		string t_strDoors;
		string t_strIterations;

		getline(t_line, t_strDoors, ' ');
		getline(t_line, t_strIterations, ' ');

		int t_nDoors = atoi(t_strDoors.c_str());
		int t_nIterations = atoi(t_strIterations.c_str());

		vector<bool> t_aryDoors = vector<bool>();

		for (int t_i = 0; t_i < t_nDoors; ++t_i)
		{
			t_aryDoors.push_back(true);
		}

		int t_cIter = t_nIterations - 1;

		while (t_cIter > 0)
		{
			for (int t_i = 1; t_i < t_nDoors; t_i += 2)
			{
				t_aryDoors[t_i] = false;
			}

			for (int t_i = 2; t_i < t_nDoors; t_i += 3)
			{
				t_aryDoors[t_i] = !t_aryDoors[t_i];
			}

			t_cIter--;
		}

		t_aryDoors[t_aryDoors.size() - 1] = !t_aryDoors[t_aryDoors.size() - 1];

		int t_cOpen = 0;

		for (int t_i = 0; t_i < t_aryDoors.size(); ++t_i)
		{
			if (t_aryDoors[t_i])
			{
				t_cOpen++;
			}
		}

		cout << t_cOpen << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
