#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#if _EDITOR

#include "14cpp.h"

void CP14::vBubbleSort(vector<string> &p_vector)
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

vector<string> CP14::aryGetPermutations(string p_strNum)
#else
vector<string> aryGetPermutations(string p_strNum)
#endif
{
	int t_len = p_strNum.length();

	vector<string> t_aryStrPerms = vector<string>();

	vector<string> t_aStrParts = vector<string>();
	vector<int> t_anCounts = vector<int>();

	for (int t_i = 0; t_i < t_len; ++t_i)
	{
		t_aStrParts.push_back(p_strNum.substr(t_i, 1));
		t_aryStrPerms.push_back(p_strNum.substr(t_i, 1));
		t_anCounts.push_back(count(p_strNum.begin(), p_strNum.end(), p_strNum[t_i]));
	}

	int t_x = 0;
	int t_y = 0;

	for (int t_i = 1; t_i < t_len; ++t_i)
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

		for (unsigned int t_j = 0; t_j < t_anCounts.size(); ++t_j)
		{
			if (count(t_aryStrPerms[t_i].begin(), t_aryStrPerms[t_i].end(), t_aStrParts[t_j][0]) != t_anCounts[t_j])
			{
				t_aryStrPerms.erase(t_aryStrPerms.begin() + t_i);
				t_i--;
				break;
			}
		}
	}

	vBubbleSort(t_aryStrPerms);
	
	return t_aryStrPerms;
}

#if _EDITOR

int CP14::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		vector<string> t_aPerms = aryGetPermutations(t_strInput);

		for (unsigned int t_i = 0; t_i < t_aPerms.size(); ++t_i)
		{
			cout << t_aPerms[t_i];

			if (t_i + 1 < t_aPerms.size())
			{
				cout << ",";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
