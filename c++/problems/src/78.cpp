#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "78.h"

static const char * fsc_pChzName = "Sudoku";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/78/";
static const int fsc_nNumber = 78;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP78::CP78()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{

}

CP78::~CP78()
{
}

int CP78::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		vector<int> t_grid = vector<int>();

		istringstream line(t_strInput);
		string t_strSize;
		string t_strValues;
		string t_str;

		getline(line, t_strSize, ';');
		getline(line, t_strValues, ';');

		istringstream line2(t_strValues);

		int t_cSize = atoi(t_strSize.c_str());

		while (getline(line2, t_str, ','))
		{
			t_grid.push_back(atoi(t_str.c_str()));
		}

		int t_cGrids = t_cSize == 4 ? 2 : 3;
		
		bool t_fValid = true;

		for (unsigned int t_i = 0; t_i < t_grid.size(); t_i += t_cSize)
		{
			// check the rows
			for (int t_j = 1; t_j <= t_cSize; ++t_j)
			{
				int t_c = 0;
				for (int t_k = t_i; t_k < t_cSize; ++t_k)
				{
					if (t_grid[t_k] == t_j) t_c++;
				}

				if (t_c > 1) t_fValid = false;
			}

			int t_nCol = t_i % t_cSize;

			// check the columns
			for (int t_j = 1; t_j <= t_cSize; ++t_j)
			{
				int t_c = 0;
				for (int t_k = 0; t_k < t_cSize; ++t_k)
				{
					if (t_grid[t_nCol + (t_k * t_cSize)] == t_j) t_c++;
				}

				if (t_c > 1) t_fValid = false;
			}
		}

		for (int t_i = 0; t_i < t_cGrids * t_cGrids; ++t_i)
		{
			int t_xGrid = (t_i % t_cGrids) * t_cGrids;
			int t_yGrid = (t_i / t_cGrids) * t_cGrids;

			for (int t_j = 1; t_j <= t_cSize; ++t_j)
			{
				int t_c = 0;
				for (int t_x = 0; t_x < t_cGrids; ++t_x)
				{
					for (int t_y = 0; t_y < t_cGrids; ++t_y)
					{
						int t_index = (t_xGrid + t_x) + ((t_yGrid + t_y) * t_cSize);
	
						if (t_grid[t_index] == t_j) t_c++;
					}
				}

				if (t_c > 1) t_fValid = false;
			}
		}

		if (t_fValid)
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}

	t_file.close();

	return 0;
}
