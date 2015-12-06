#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "225.h"

static const char * fsc_pChzName = "Testing";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/225/";
static const int fsc_nNumber = 225;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP225::CP225()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP225::~CP225()
{
}

int CP225::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;
	string t_strTest;
	string t_strCorrect;
	int t_cBugs = 0;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		
		getline(line, t_strTest, '|');
		getline(line, t_strCorrect, '|');
		
		t_strTest = t_strTest.substr(0, t_strTest.length() - 1);
		t_strCorrect = t_strCorrect.substr(1);

		for (int t_i = 0; t_i < t_strTest.length(); ++t_i)
		{
			if (t_strTest[t_i] != t_strCorrect[t_i])
			{
				t_cBugs++;
			}
		}

		if (t_cBugs == 0)
		{
			cout << "Done" << endl;
		}
		else if (t_cBugs <= 2)
		{
			cout << "Low" << endl;
		}
		else if (t_cBugs <= 4)
		{
			cout << "Medium" << endl;
		}
		else if (t_cBugs <= 6)
		{
			cout << "High" << endl;
		}
		else
		{
			cout << "Critical" << endl;
		}

		t_cBugs = 0;
	}

	t_file.close();

	return 0;
}
