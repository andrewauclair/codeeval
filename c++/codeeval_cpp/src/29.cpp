#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "29cpp.h"

int CP29::nRun(int argc, const char * argv[])
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
		vector<string> t_aryValues = vector<string>();
		string t_strLast = "";

		while (getline(line, t_str, ','))
		{
			if (t_str.compare(t_strLast) != 0)
			{
				t_aryValues.push_back(t_str);
			}
			t_strLast = t_str;
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
