#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "115cpp.h"

int C115::nRun(int argc, const char * argv[])
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
		vector<string> t_aryStrs = vector<string>();
		vector<int> t_aryValues = vector<int>();

		bool t_fOutput = false;

		while (getline(line, t_str, ','))
		{
			int t_nValue = 0;

			stringstream ss;
			ss << t_str;
			ss >> t_nValue;

			if (ss.fail())
			{
				t_aryStrs.push_back(t_str);
				t_fOutput = true;
			}
			else
			{
				t_aryValues.push_back(atoi(t_str.c_str()));	
			}

			ss.str("");
		}

		for (unsigned int t_i = 0; t_i < t_aryStrs.size(); ++t_i)
		{
			cout << t_aryStrs[t_i];

			if (t_i + 1 < t_aryStrs.size())
			{
				cout << ",";
			}
		}
		if (t_aryStrs.size() > 0 && t_aryValues.size() > 0)
		{
			cout << "|";
		}

		for (unsigned int t_i = 0; t_i < t_aryValues.size(); ++t_i)
		{
			cout << t_aryValues[t_i];

			if (t_i + 1 < t_aryValues.size())
			{
				cout << ",";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
