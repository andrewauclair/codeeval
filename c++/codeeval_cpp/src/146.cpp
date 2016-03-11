#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

#if _EDITOR

#include "146cpp.h"

void C146::vBubbleSort(vector<int> &p_vector)
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

int C146::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

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
			for (unsigned int t_j = 0; t_j < t_bats.size(); ++t_j)
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

	t_file.close();

	return 0;
}
