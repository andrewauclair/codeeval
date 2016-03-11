#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "10cpp.h"

int C10::nRun(int argc, const char * argv[])
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

		while (getline(line, t_str, ' '))
		{
			t_aryValues.push_back(t_str);
		}

		int t_nIndex = atoi(t_aryValues[t_aryValues.size() - 1].c_str());

		if (t_aryValues.size() - 1 - t_nIndex >= 0 && t_aryValues.size() - 1 - t_nIndex < t_aryValues.size() - 1)
		{
			cout << t_aryValues[t_aryValues.size() - 1 - t_nIndex] << endl;
		}
	}

	t_file.close();

	return 0;
}
