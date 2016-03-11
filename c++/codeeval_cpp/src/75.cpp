#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "75cpp.h"

int C75::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		vector<int> t_aryNums = vector<int>();
		istringstream line(t_strInput);
		string t_str;

		getline(line, t_str, ',');
		int t_c = atoi(t_str.c_str());
		getline(line, t_str, ',');
		int t_m = atoi(t_str.c_str());

		for (int t_i = 0; t_i < t_c; ++t_i)
		{
			t_aryNums.push_back(t_i);
		}

		int t_n = -1;
		int t_cOut = 0;

		while (t_cOut < t_c)
		{
			for (int t_i = 0; t_i < t_m; ++t_i)
			{
				t_n++;

				if (t_n > t_c - 1)
				{
					t_n = 0;
				}

				if (t_aryNums[t_n] == -1)
				{
					t_i--;
				}
			}

			// execute
			cout << t_n;
			t_aryNums[t_n] = -1;

			if (t_cOut + 1 < t_c)
			{
				cout << " ";
			}

			t_cOut++;
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
