#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "158.h"

void CP158::vBubbleSort(vector<int> &p_vector, int p_cLoops)
#else
void vBubbleSort(vector<int> &p_vector, int p_cLoops)
#endif
{
	//bool t_fSwapped = false;
	int t_cLoops = 0;

	do
	{
		//t_fSwapped = false;

		for (unsigned int t_i = 1; t_i < p_vector.size(); ++t_i)
		{
			if (p_vector[t_i] < p_vector[t_i - 1])
			{
				int t_n = p_vector[t_i];
				p_vector[t_i] = p_vector[t_i - 1];
				p_vector[t_i - 1] = t_n;
				//t_fSwapped = true;
			}
		}

		t_cLoops++;
	} while (t_cLoops < p_cLoops);
}

#if _EDITOR

static const char * fsc_pChzName = "Interrupted Bubble Sort";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/158/";
static const int fsc_nNumber = 158;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP158::CP158()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP158::~CP158()
{
}

int CP158::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		int t_iPipe = t_strInput.find_first_of('|');
		string t_strValues = t_strInput.substr(0, t_iPipe);
		string t_strLoops = t_strInput.substr(t_iPipe + 1, t_strInput.length() - t_iPipe - 1);

		int t_cLoops = atoi(t_strLoops.c_str());

		istringstream line(t_strValues);
		string t_str;
		vector<int> t_aryValues = vector<int>();

		while (getline(line, t_str, ' '))
		{
			t_aryValues.push_back(atoi(t_str.c_str()));
		}

		vBubbleSort(t_aryValues, t_cLoops);

		for (unsigned int t_i = 0; t_i < t_aryValues.size(); ++t_i)
		{
			cout << t_aryValues[t_i];
			if (t_i + 1 < t_aryValues.size())
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
