#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "43.h"

void CP43::vBubbleSort(vector<int> &p_vector)
#else
void vBubbleSort(vector<int> &p_vector)
#endif
{
	bool t_fSwapped = false;
	
	do
	{
		t_fSwapped = false;

		for (unsigned int t_i = 1; t_i < p_vector.size(); ++t_i)
		{
			if (p_vector[t_i] < p_vector[t_i - 1])
			{
				int t_n = p_vector[t_i];
				p_vector[t_i] = p_vector[t_i - 1];
				p_vector[t_i - 1] = t_n;
				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR

static const char * fsc_pChzName = "Jolly Jumpers";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/43/";
static const int fsc_nNumber = 43;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP43::CP43()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP43::~CP43()
{
}

int CP43::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;
	vector<int> t_anValues = vector<int>();
	vector<int> t_anDiffs = vector<int>();

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_str, ' ');

		int t_c = atoi(t_str.c_str());

		while (getline(line, t_str, ' '))
		{
			t_anValues.push_back(atoi(t_str.c_str()));
		}

		for (unsigned int t_i = 1; t_i < t_anValues.size(); ++t_i)
		{
			t_anDiffs.push_back(abs(t_anValues[t_i] - t_anValues[t_i - 1]));
		}

		vBubbleSort(t_anDiffs);

		bool t_fJolly = true;

		for (int t_i = 0; t_i < t_c - 1; ++t_i)
		{
			if (t_anDiffs[t_i] != t_i + 1)
			{
				t_fJolly = false;
			}
		}

		if (t_fJolly)
		{
			cout << "Jolly" << endl;
		}
		else
		{
			cout << "Not jolly" << endl;
		}

		t_anValues.clear();
		t_anDiffs.clear();
	}

	t_file.close();

	return 0;
}
