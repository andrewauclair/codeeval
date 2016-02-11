#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "112.h"

static const char * fsc_pChzName = "Swap Elements";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/112/";
static const int fsc_nNumber = 112;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP112::CP112()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP112::~CP112()
{
}

int CP112::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;

	while (getline(t_file, t_strInput))
	{
		// split on :
		// split on ' '
		istringstream line(t_strInput);

		string t_strNums;
		getline(line, t_strNums, ':');
		string t_strSwaps;
		getline(line, t_strSwaps, ':');

		istringstream line2(t_strNums);
		vector<int> t_arynValues = vector<int>();

		while (getline(line2, t_str, ' '))
		{
			t_arynValues.push_back(atoi(t_str.c_str()));
		}

		istringstream line3(t_strSwaps);

		while (getline(line3, t_str, ','))
		{
			istringstream line4(t_str);

			string t_str2;
			int t_nIndex1 = 0;
			int t_nIndex2 = 0;

			getline(line4, t_str2, '-');
			t_nIndex1 = atoi(t_str2.c_str());
			getline(line4, t_str2, '-');
			t_nIndex2 = atoi(t_str2.c_str());

			int t_nTemp = t_arynValues[t_nIndex1];
			t_arynValues[t_nIndex1] = t_arynValues[t_nIndex2];
			t_arynValues[t_nIndex2] = t_nTemp;
		}
		for (int t_i = 0; t_i < t_arynValues.size(); ++t_i)
		{
			cout << t_arynValues[t_i];

			if (t_i + 1 < t_arynValues.size())
			{
				cout << " ";
			}
		}

		cout << endl;
		// split on ','
		// split on '-'
	}

	t_file.close();

	return 0;
}
