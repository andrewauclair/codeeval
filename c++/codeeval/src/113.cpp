#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "113.h"

static const char * fsc_pChzName = "Multiply Lists";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/113/";
static const int fsc_nNumber = 113;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP113::CP113()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP113::~CP113()
{
}

void CP113::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/113_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif
	
	string t_str;

	while (getline(t_file, t_strInput))
	{
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), '|'), t_strInput.end());

		istringstream line(t_strInput);
		vector<int> t_aryValues = vector<int>();


		while (getline(line, t_str, ' '))
		{
			//cout << t_str < " ";
			t_aryValues.push_back(atoi(t_str.c_str()));	
		}
		//cout << endl;
		for (int t_i = 0; t_i < t_aryValues.size() / 2; ++t_i)
		{
			cout << t_aryValues[t_i] * t_aryValues[(t_aryValues.size() / 2) + 1 + t_i];

			if (t_i + 1 < t_aryValues.size() / 2)
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
