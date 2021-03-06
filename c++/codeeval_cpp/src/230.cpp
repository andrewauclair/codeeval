#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "230cpp.h"

void C230::vBubbleSort(vector<int> &p_vector)
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
void C230::vSortTeams(vector<vector<int>> &p_aCountries, vector<int> &p_aTeams)
#else
void vSortTeams(vector<vector<int>> &p_aCountries, vector<int> &p_aTeams)
#endif
{
	bool t_fSwapped = false;

	do
	{
		t_fSwapped = false;

		for (unsigned int t_i = 1; t_i < p_aTeams.size(); ++t_i)
		{
			if (p_aTeams[t_i] < p_aTeams[t_i - 1])
			{
				int t_nTeam = p_aTeams[t_i];
				p_aTeams[t_i] = p_aTeams[t_i - 1];
				p_aTeams[t_i - 1] = t_nTeam;

				vector<int> t_country = p_aCountries[t_i];
				p_aCountries[t_i] = p_aCountries[t_i - 1];
				p_aCountries[t_i - 1] = t_country;

				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR

int C230::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;
	string t_str;
	string t_strNumber;

	while (getline(t_file, t_strInput))
	{
		vector<vector<int>> t_aCountries = vector<vector<int>>();
		vector<int> t_aTeams = vector<int>();
		int t_iCountry = 1;

		istringstream line(t_strInput);
		
		while (getline(line, t_str, '|'))
		{
			t_aCountries.push_back(vector<int>());

			t_str.erase(t_str.find_last_not_of(" ") + 1);
			t_str.erase(0, t_str.find_first_not_of(" "));

			istringstream line2(t_str);

			while (getline(line2, t_strNumber, ' '))
			{
				vector<int>::iterator it = std::find(t_aTeams.begin(), t_aTeams.end(), atoi(t_strNumber.c_str()));

				if (it == t_aTeams.end())
				{
					t_aTeams.push_back(atoi(t_strNumber.c_str()));
					t_aCountries.push_back(vector<int>());
					it = std::find(t_aTeams.begin(), t_aTeams.end(), atoi(t_strNumber.c_str()));
				}

				t_aCountries[it - t_aTeams.begin()].push_back(t_iCountry);
			}
			t_iCountry++;
		}

		for (unsigned int t_i = 0; t_i < t_aCountries.size(); ++t_i)
		{
			vBubbleSort(t_aCountries[t_i]);
		}

		vSortTeams(t_aCountries, t_aTeams);

		for (unsigned int t_i = 0; t_i < t_aTeams.size(); ++t_i)
		{
			cout << t_aTeams[t_i] << ":";
			for (unsigned int t_j = 0; t_j < t_aCountries[t_i].size(); ++t_j)
			{
				cout << t_aCountries[t_i][t_j];
				if (t_j + 1 < t_aCountries[t_i].size())
				{
					cout << ",";
				}
			}
			cout << ";";
			if (t_i + 1 < t_aTeams.size())
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	

	t_file.close();

	return 0;
}
