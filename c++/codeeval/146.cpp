#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
#if _EDITOR
#include "146.h"

void CP146::vBubbleSort(vector<int> &p_vector)
#else
void vBubbleSort(vector<int> &p_vector)
#endif
{
	bool t_fSwapped = false;
	
	do
	{
		t_fSwapped = false;

		for (int t_i = 1; t_i < p_vector.size(); ++t_i)
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
static const char * fsc_pChzName = "Bats Challenge";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/146/";
static const int fsc_nNumber = 146;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Med;
CP146::CP146()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP146::~CP146()
{
}
void CP146::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;
#if _EDITOR
	t_file.open("146.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_length = 0;
	int t_dist = 0;
	int t_nBats = 0;
	int t_cBat = 0;

	while (!t_file.eof())
	{
		vector<int> t_bats = vector<int>();

		t_file >> t_length;
		t_file >> t_dist;
		t_file >> t_nBats;
		
		int t_n = 0;

		for (int t_i = 0; t_i < t_nBats; ++t_i)
		{
			t_file >> t_n;
			t_bats.push_back(t_n);
		}

		for (int t_i = 6; t_i < t_length - 5; ++t_i)
		{
			bool t_fValid = true;
			for (int t_j = 0; t_j < t_bats.size(); ++t_j)
			{
				if (t_i > t_bats[t_j] - t_dist && t_i < t_bats[t_j] + t_dist)
				{
					t_fValid = false;
					break;
				}
			}

			if (t_fValid)
			{
				t_bats.push_back(t_i);
				vBubbleSort(t_bats);
			}
		}

		cout << t_bats.size() - t_nBats << endl;
	}
}
