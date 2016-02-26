#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "2cpp.h"

void CP2::vSortAndPrint(vector<string> p_aryStrLines, int p_c)
#else
void vSortAndPrint(vector<string> p_aryStrLines, int p_c)
#endif
{
	int t_nLength = p_aryStrLines.size();

	bool t_fSwapped = false;

	do
	{
		t_fSwapped = false;

		for (int t_i = 1; t_i < t_nLength; ++t_i)
		{
			if (p_aryStrLines[t_i-1].length() < p_aryStrLines[t_i].length())
			{
				string t_str = p_aryStrLines[t_i-1];
				p_aryStrLines[t_i-1] = p_aryStrLines[t_i];
				p_aryStrLines[t_i] = t_str;
				t_fSwapped = true;
			}
		}
	}
	while (t_fSwapped);

	for (int t_i = 0; t_i < p_c; ++t_i)
	{
		cout << p_aryStrLines[t_i] << endl;
	}
}

#if _EDITOR

int CP2::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	getline(t_file, t_strInput);

	int t_nLines = atoi(t_strInput.c_str());
	vector<string> t_aryStrLines = vector<string>();

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		t_aryStrLines.push_back(t_strInput);
	}

	vSortAndPrint(t_aryStrLines, t_nLines);

	t_file.close();

	return 0;
}
