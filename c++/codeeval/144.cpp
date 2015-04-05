#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

int nOnes(int p_nNum)
{
	return p_nNum - ((p_nNum / 10) * 10);
}

#if _EDITOR

#include "144.h"

static const char * fsc_pChzName = "Digit Statistics";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/144/";
static const int fsc_nNumber = 144;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Nil;

CP144::CP144()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP144::~CP144()
{
}

void CP144::vRun()

#else

int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("144.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}
		//cout << t_strInput << endl;
		istringstream t_line(t_strInput);

		string t_strA;
		string t_strN;

		getline(t_line, t_strA, ' ');
		getline(t_line, t_strN, ' ');

		int t_a = atoi(t_strA.c_str());
		int t_n = atoi(t_strN.c_str());

		int t_ac[10];
		int t_anNums[4];

		for (int t_i = 0; t_i < 10; ++t_i)
		{
			t_ac[t_i] = 0;
		}

		/*int t_nOnes = nOnes(t_a);
		t_anNums[0] = t_nOnes;

		t_ac[nOnes(t_a)]++;
*/
		for (int t_i = 0; t_i < 4; ++t_i)
		{
			int t_nNum = (int)pow((float)t_a, t_i + 1);
			int t_nOnes = nOnes(t_nNum);
			t_ac[t_nOnes]++;
			t_anNums[t_i] = t_nOnes;
		}

		for (int t_i = 4; t_i < t_n; ++t_i)
		{
			t_ac[t_anNums[t_i % 4]]++;
			/*int t_nNum = (int)pow(t_a, (float)t_i);
			int t_nOnes = nOnes(t_nNum);
			t_ac[nOnes(pow(t_a, (float)t_i))]++;*/
		}

		for (int t_i = 0; t_i < 9; ++t_i)
		{
			printf("%d: %d, ", t_i, t_ac[t_i]);
		}

		printf("%d: %d\n", 9, t_ac[9]);
	}
}
