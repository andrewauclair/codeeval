#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "74cpp.h"

static const bool fsc_fFinished = true;

int C74::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		int t_nNum = atoi(t_strInput.c_str());
		int t_nCoins = 0;

		t_nCoins += (t_nNum / 5);
		t_nNum -= (t_nNum / 5) * 5;
		t_nCoins += (t_nNum / 3);
		t_nNum -= (t_nNum / 3) * 3;
		t_nCoins += t_nNum;

		cout << t_nCoins << endl;
	}

	t_file.close();

	return 0;
}
