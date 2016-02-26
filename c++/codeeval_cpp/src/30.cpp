#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "30cpp.h"

int CP30::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		vector<int> t_arynValues[2];
		int t_nList = 0;
		istringstream line(t_strInput);

		while (getline(line, t_str, ';'))
		{
			istringstream line2(t_str);

			string t_strNum;

			while (getline(line2, t_strNum, ','))
			{
				t_arynValues[t_nList].push_back(atoi(t_strNum.c_str()));
			}

			t_nList++;
		}

		vector<int> t_arynMatches = vector<int>();

		for (unsigned int t_i = 0; t_i < t_arynValues[0].size(); ++t_i)
		{
			for (unsigned int t_j = 0; t_j < t_arynValues[1].size(); ++t_j)
			{
				if (t_arynValues[0][t_i] == t_arynValues[1][t_j])
				{
					t_arynMatches.push_back(t_arynValues[0][t_i]);
				}
			}
		}

		for (unsigned int t_i = 0; t_i < t_arynMatches.size(); ++t_i)
		{
			cout << t_arynMatches[t_i];
			
			if (t_i + 1 < t_arynMatches.size())
			{
				cout << ",";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
