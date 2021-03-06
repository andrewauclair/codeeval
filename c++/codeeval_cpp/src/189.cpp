#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

#if _EDITOR

#include "189cpp.h"

int C189::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (!t_file.eof())
	{
		int t_c = 0;
		vector<int> t_aHouses = vector<int>();

		t_file >> t_c;

		int t_nLowAddress = 10001;
		int t_nHighAddress = 0;

		for (int t_i = 0; t_i < t_c; ++t_i)
		{
			int t_n = 0;
			t_file >> t_n;
			t_aHouses.push_back(t_n);

			if (t_n < t_nLowAddress)
			{
				t_nLowAddress = t_n;
			}
			if (t_n > t_nHighAddress)
			{
				t_nHighAddress = t_n;
			}
		}

		int t_lowDist = INT_MAX;

		for (int t_i = t_nLowAddress; t_i <= t_nHighAddress; ++t_i)
		{
			int t_dist = 0;
			
			for (unsigned int t_j = 0; t_j < t_aHouses.size(); ++t_j)
			{
				t_dist += abs(t_i - t_aHouses[t_j]);
			}

			if (t_dist < t_lowDist)
			{
				t_lowDist = t_dist;
			}
		}

		cout << t_lowDist << endl;
	}

	t_file.close();

	return 0;
}
