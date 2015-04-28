#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "70.h"

static const char * fsc_pChzName = "Overlapping Rectangles";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/70/";
static const int fsc_nNumber = 70;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Med;

CP70::CP70()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP70::~CP70()
{
}

void CP70::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/70_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		vector<int> t_aValues = vector<int>();
		istringstream line(t_strInput);
		string t_str;

		while (getline(line, t_str, ','))
		{
			t_aValues.push_back(atoi(t_str.c_str()));
		}

		bool t_fOverlap = false;

		// upper left A is inside of Rectangle B
		if (t_aValues[0] >= t_aValues[4] && t_aValues[0] <= t_aValues[6] &&
			t_aValues[1] <= t_aValues[5] && t_aValues[1] >= t_aValues[7])
		{
			t_fOverlap = true;
		}

		// lower left A is inside of Rectangle B
		if (t_aValues[2] >= t_aValues[4] && t_aValues[2] <= t_aValues[6] &&
			t_aValues[3] <= t_aValues[5] && t_aValues[3] >= t_aValues[7])
		{
			t_fOverlap = true;
		}

		// upper right A is inside of Rectangle B
		if (t_aValues[2] >= t_aValues[4] && t_aValues[2] <= t_aValues[6] &&
			t_aValues[1] <= t_aValues[5] && t_aValues[1] >= t_aValues[7])
		{
			t_fOverlap = true;
		}

		// lower left A is inside of Rectangle B
		if (t_aValues[0] >= t_aValues[4] && t_aValues[0] <= t_aValues[6] &&
			t_aValues[3] <= t_aValues[5] && t_aValues[3] >= t_aValues[7])
		{
			t_fOverlap = true;
		}

		// upper left B is inside of Rectangle A
		if (t_aValues[4] >= t_aValues[0] && t_aValues[4] <= t_aValues[2] &&
			t_aValues[5] <= t_aValues[1] && t_aValues[5] >= t_aValues[3])
		{
			t_fOverlap = true;
		}

		// lower left B is inside of Rectangle A
		if (t_aValues[6] >= t_aValues[0] && t_aValues[6] <= t_aValues[2] &&
			t_aValues[7] <= t_aValues[1] && t_aValues[7] >= t_aValues[3])
		{
			t_fOverlap = true;
		}

		// upper right B is inside of Rectangle A
		if (t_aValues[6] >= t_aValues[0] && t_aValues[6] <= t_aValues[2] &&
			t_aValues[5] <= t_aValues[1] && t_aValues[5] >= t_aValues[3])
		{
			t_fOverlap = true;
		}

		// lower left B is inside of Rectangle A
		if (t_aValues[4] > t_aValues[0] && t_aValues[4] < t_aValues[2] &&
			t_aValues[7] < t_aValues[1] && t_aValues[7] > t_aValues[3])
		{
			t_fOverlap = true;
		}

		if (t_fOverlap)
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
