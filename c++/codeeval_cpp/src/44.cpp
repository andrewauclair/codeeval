#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "44cpp.h"

void CP44::vBubbleSort(vector<string> &p_vector)
#else
void vBubbleSort(vector<string> &p_vector)
#endif
{
	bool t_fSwapped = false;

	do
	{
		t_fSwapped = false;

		for (unsigned int t_i = 1; t_i < p_vector.size(); ++t_i)
		{
			if (p_vector[t_i].compare(p_vector[t_i - 1]) < 0)
			{
				string t_str = p_vector[t_i];
				p_vector[t_i] = p_vector[t_i - 1];
				p_vector[t_i - 1] = t_str;
				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR

vector<string> CP44::aryGetPermutations(string p_strNum)
#else
vector<string> aryGetPermutations(string p_strNum)
#endif
{
	unsigned int t_len = p_strNum.length();

	vector<string> t_aryStrPerms = vector<string>();

	vector<string> t_aStrParts = vector<string>();
	vector<int> t_anCounts = vector<int>();

	for (unsigned int t_i = 0; t_i < t_len; ++t_i)
	{
		t_aStrParts.push_back(p_strNum.substr(t_i, 1));
		t_aryStrPerms.push_back(p_strNum.substr(t_i, 1));
		t_anCounts.push_back(count(p_strNum.begin(), p_strNum.end(), p_strNum[t_i]));
	}

	int t_x = 0;
	int t_y = 0;

	for (unsigned int t_i = 1; t_i < t_len; ++t_i)
	{
		t_x = t_y;
		t_y = t_aryStrPerms.size();

		int t_l = t_aryStrPerms.size();
		for (int t_j = t_x; t_j < t_l; ++t_j)
		{
			for (unsigned int t_k = 0; t_k < t_aStrParts.size(); ++t_k)
			{
				t_aryStrPerms.push_back(t_aryStrPerms[t_j] + t_aStrParts[t_k]);
			}
		}
	}

	for (unsigned int t_i = 0; t_i < t_aryStrPerms.size(); ++t_i)
	{
		if (t_aryStrPerms[t_i].length() < p_strNum.length())
		{
			t_aryStrPerms.erase(t_aryStrPerms.begin() + t_i);
			t_i--;
			continue;
		}

		if (t_i < t_aryStrPerms.size() - 1)
		{
			if (t_aryStrPerms[t_i].compare(t_aryStrPerms[t_i + 1]) == 0)
			{
				t_aryStrPerms.erase(t_aryStrPerms.begin() + t_i);
				t_i--;
				continue;
			}
		}
	}

	vBubbleSort(t_aryStrPerms);
	
	return t_aryStrPerms;
}

#if _EDITOR

int CP44::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	return -1;
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		string t_strNum = string(t_strInput);
		// we need to get the next permutation of this number
		// if we can't find a higher one with the same numbers we just add a 0 into the mix
		// so 115 would become 1150
		bool t_fFound = false;
		int t_n = atoi(t_strNum.c_str());

		vector<int> t_anCounts = vector<int>();

		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			t_anCounts.push_back(count(t_strInput.begin(), t_strInput.end(), t_strInput[t_i]));
		}
	
		do
		{
			vector<string> t_aryStrPerms = aryGetPermutations(t_strInput);

			for (unsigned int t_i = 0; t_i < t_aryStrPerms.size(); ++t_i)
			{
				if (atoi(t_aryStrPerms[t_i].c_str()) > t_n)
				{
					bool t_fValid = true;
					for (unsigned int t_j = 0; t_j < t_anCounts.size(); ++t_j)
					{
						if (count(t_aryStrPerms[t_i].begin(), t_aryStrPerms[t_i].end(), t_strInput[t_j]) != t_anCounts[t_j])
						{
							t_fValid = false;
							break;
						}
					}
					if (t_fValid)
					{
						t_fFound = true;
						cout << t_aryStrPerms[t_i] << endl;
						break;
					}
				}
			}
			if (!t_fFound)
			{
				t_strInput+= "0";
			}
		} while (!t_fFound);
	}

	t_file.close();

	return 0;
}
