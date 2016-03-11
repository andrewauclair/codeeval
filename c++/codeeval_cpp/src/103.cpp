#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "103cpp.h"

int C103::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;

	while (getline(t_file, t_strInput))
	{
		int t_aNums[9];
		t_aNums[0] = 0;
		t_aNums[1] = 0;
		t_aNums[2] = 0;
		t_aNums[3] = 0;
		t_aNums[4] = 0;
		t_aNums[5] = 0;
		t_aNums[6] = 0;
		t_aNums[7] = 0;
		t_aNums[8] = 0;

		istringstream line(t_strInput);

		vector<int> t_arynValues = vector<int>();

		while (getline(line, t_str, ' '))
		{
			t_arynValues.push_back(atoi(t_str.c_str()));

			t_aNums[atoi(t_str.c_str()) - 1]++;
		}

		bool t_fFound = false;
		int t_nIndex = 0;

		for (int t_i = 0; t_i < 9; ++t_i)
		{
			if (t_aNums[t_i] == 1)
			{
				t_nIndex = t_i + 1;
				t_fFound = true;
				break;
			}
		}
		
		if (!t_fFound)
		{
			cout << "0" << endl;
		}
		else
		{
			for (unsigned int t_i = 0; t_i < t_arynValues.size(); ++t_i)
			{
				if (t_arynValues[t_i] == t_nIndex)
				{
					cout << t_i + 1 << endl;
					break;
				}
			}
		}
	}

	t_file.close();

	return 0;
}
