#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "1cpp.h"

int C1::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	int t_nFizz = 0;
	int t_nBuzz = 0;
	int t_nTotal = 0;

	while (!t_file.eof())
	{
		t_file >> t_nFizz;
		t_file >> t_nBuzz;
		t_file >> t_nTotal;

		for (int t_i = 1; t_i < t_nTotal + 1; ++t_i)
		{
			if (t_i % t_nFizz == 0 && t_i % t_nBuzz == 0)
			{
				cout << "FB ";
			}
			else if (t_i % t_nFizz == 0)
			{
				cout << "F ";
			}
			else if (t_i % t_nBuzz == 0)
			{
				cout << "B ";
			}
			else
			{
				cout << t_i << " ";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
