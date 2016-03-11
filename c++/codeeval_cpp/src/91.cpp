#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "91cpp.h"

int C91::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);
		bool t_fNegative = false;
		int t_nValue = 0;
		int t_nNum = -1;
		int t_nCount = 0;
		vector<string> t_aryValues = vector<string>();
		vector<float> t_aryrValues = vector<float>();

		while (getline(line, t_str, ' '))
		{
			t_aryValues.push_back(t_str);
			t_aryrValues.push_back((float)atof(t_str.c_str()));	
		}

		bool t_fSwapped = true;

		while (t_fSwapped)
		{
			t_fSwapped = false;

			for (size_t t_i = 0; t_i < t_aryrValues.size() - 1; ++t_i)
			{
				if (t_aryrValues[t_i + 1] < t_aryrValues[t_i])
				{
					t_fSwapped = true;
					float t_rTemp = t_aryrValues[t_i + 1];
					t_aryrValues[t_i + 1] = t_aryrValues[t_i];
					t_aryrValues[t_i] = t_rTemp;

					string t_strTemp = t_aryValues[t_i + 1];
					t_aryValues[t_i + 1] = t_aryValues[t_i];
					t_aryValues[t_i] = t_strTemp;
				}
			}
		}

		for (size_t t_i = 0; t_i < t_aryValues.size(); ++t_i)
		{
			cout << t_aryValues[t_i];

			if (t_i + 1 < t_aryValues.size())
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
