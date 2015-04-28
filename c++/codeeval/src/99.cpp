#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

#if _EDITOR

#include "99.h"

static const char * fsc_pChzName = "Calculate Distance";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/99/";
static const int fsc_nNumber = 99;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP99::CP99()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP99::~CP99()
{
}

void CP99::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;

#if _EDITOR
	t_file.open("in/99_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), '('), t_strInput.end());
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), ')'), t_strInput.end());
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), ','), t_strInput.end());

		istringstream line(t_strInput);

		getline(line, t_strInput, ' ');
		int t_nx1 = atoi(t_strInput.c_str());
		getline(line, t_strInput, ' ');
		int t_ny1 = atoi(t_strInput.c_str());
		getline(line, t_strInput, ' ');
		int t_nx2 = atoi(t_strInput.c_str());
		getline(line, t_strInput, ' ');
		int t_ny2 = atoi(t_strInput.c_str());

		int t_na = t_nx2 - t_nx1;
		int t_nb = t_ny2 - t_ny1;

		int t_ncSquared = (t_na * t_na) + (t_nb * t_nb);
		cout << sqrt((float)t_ncSquared) << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
