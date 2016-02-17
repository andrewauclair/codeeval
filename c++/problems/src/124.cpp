#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "124.h"

void CP124::vBubbleSort(vector<int> &p_vector)
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
				int t_str = p_vector[t_i];
				p_vector[t_i] = p_vector[t_i - 1];
				p_vector[t_i - 1] = t_str;
				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR

static const char * fsc_pChzName = "Road Trip";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/124/";
static const int fsc_nNumber = 124;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Easy;

CP124::CP124()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP124::~CP124()
{
}

int CP124::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;
	vector<int> t_arynValues = vector<int>();
	int t_nDist = 0;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		while (getline(line, t_str, ';'))
		{
			istringstream line2(t_str);

			string t_strDist;
			getline(line2, t_strDist, ',');
			getline(line2, t_strDist, ',');
			t_arynValues.push_back(atoi(t_strDist.c_str()));
		}

		//vBubbleSort(t_arynValues);


		// loop finding the closest city and removing it from the list
		int t_nClosest = 10000000;

		while (t_arynValues.size() > 0)
		{
			int t_nIndex = 0;
			for (unsigned int t_i = 0; t_i < t_arynValues.size(); ++t_i)
			{
				if (t_arynValues[t_i] < t_nClosest)
				{
					t_nIndex = t_i;
					t_nClosest = t_arynValues[t_i];
				}
			}

			t_arynValues.erase(t_arynValues.begin() + t_nIndex);
			
			cout << t_nClosest - t_nDist;
			t_nDist = t_nClosest;

			if (t_arynValues.size() > 0)
			{
				cout << ",";
			}

			t_nClosest = 100000000;
		}

		cout << endl;

		t_arynValues.clear();
	}

	t_file.close();

	return 0;
}
