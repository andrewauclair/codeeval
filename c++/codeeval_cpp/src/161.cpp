#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#if _EDITOR

#include "161cpp.h"

int CP161::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	vector<string> t_aGrid = vector<string>();
	vector<string> t_aWorkingGrid = vector<string>();

	while (getline(t_file, t_strInput))
	{
		t_aGrid.push_back(t_strInput);
		t_aWorkingGrid.push_back(t_strInput);
	}

	for (int t_i = 0; t_i < 10; ++t_i)
	{
		for (unsigned int t_j = 0; t_j < t_aGrid.size(); ++t_j)
		{
			for (unsigned int t_k = 0; t_k < t_aGrid[t_j].size(); ++t_k)
			{
				int t_cAlive = 0;
				int t_cDead = 0;
				bool t_fLiving = t_aGrid[t_j][t_k] == '*';

				if (t_j > 0 && t_k > 0 &&
					t_aGrid[t_j - 1][t_k - 1] == '*')
				{
					t_cAlive++;
				}

				if (t_j > 0 && 
					t_aGrid[t_j - 1][t_k] == '*')
				{
					t_cAlive++;
				}

				if (t_j > 0 && t_k < t_aGrid[t_j].size() - 1 &&
					t_aGrid[t_j - 1][t_k + 1] == '*')
				{
					t_cAlive++;
				}

				if (t_k > 0 &&
					t_aGrid[t_j][t_k - 1] == '*')
				{
					t_cAlive++;
				}

				if (t_j < t_aGrid.size() - 1 && t_k > 0 &&
					t_aGrid[t_j + 1][t_k - 1] == '*')
				{
					t_cAlive++;
				}

				if (t_j < t_aGrid.size() - 1 &&
					t_aGrid[t_j + 1][t_k] == '*')
				{
					t_cAlive++;
				}

				if (t_j < t_aGrid.size() - 1 && t_k < t_aGrid[t_j].size() - 1 &&
					t_aGrid[t_j + 1][t_k + 1] == '*')
				{
					t_cAlive++;
				}

				if (t_k < t_aGrid[t_j].size() - 1 &&
					t_aGrid[t_j][t_k + 1] == '*')
				{
					t_cAlive++;
				}

				t_cDead = 8 - t_cAlive;

				if (t_cAlive < 2)
				{
					t_aWorkingGrid[t_j][t_k] = '.';
				}
				else if ((t_cAlive == 2 || t_cAlive == 3) && t_fLiving)
				{
					t_aWorkingGrid[t_j][t_k] = '*';
				}
				else if (t_cAlive == 3 && !t_fLiving)
				{
					t_aWorkingGrid[t_j][t_k] = '*';
				}
				else if (t_cAlive > 3)
				{
					t_aWorkingGrid[t_j][t_k] = '.';
				}
			}
		}

		// copy working grid to grid
		for (unsigned int t_i = 0; t_i < t_aGrid.size(); ++t_i)
		{
			t_aGrid[t_i] = t_aWorkingGrid[t_i];
		}
	}

	for (unsigned int t_i = 0; t_i < t_aGrid.size(); ++t_i)
	{
		cout << t_aGrid[t_i] << endl;
	}

	t_file.close();

	return 0;
}
