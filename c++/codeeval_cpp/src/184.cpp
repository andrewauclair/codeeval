#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#if _EDITOR

#include "184cpp.h"

void C184::vBubbleSort(vector<string> &p_vector)
#else
void vBubbleSort(vector<string> &p_vector)
#endif
{
	bool t_fSwapped = false;

	do
	{
		t_fSwapped = false;

		for (unsigned int t_i = 1; t_i < p_vector.size(); ++t_i)
		{
			if (p_vector[t_i].compare(p_vector[t_i - 1]) < 0)
			{
				string t_str = p_vector[t_i];
				p_vector[t_i] = p_vector[t_i - 1];
				p_vector[t_i - 1] = t_str;
				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR

string C184::strDecodeBWT(string p_str)
#else
string strDecodeBWT(string p_str)
#endif
{
	// create the vector of strings with the first letter
	vector<string> t_aryStrPerms = vector<string>();

	for (unsigned int t_i = 0; t_i < p_str.length(); ++t_i)
	{
		t_aryStrPerms.push_back(string(1, p_str[t_i]));
	}

	while (t_aryStrPerms[0].length() < p_str.length())
	{
		// sort the vector
		vBubbleSort(t_aryStrPerms);

		// push the letters onto the beginning of the strings
		for (unsigned int t_i = 0; t_i < p_str.length(); ++t_i)
		{
			t_aryStrPerms[t_i].insert(0, string(1, p_str[t_i]));
		}
	}

	for (unsigned int t_i = 0; t_i < t_aryStrPerms.size(); ++t_i)
	{
		if (t_aryStrPerms[t_i][p_str.length() - 1] == '$')
		{
			return t_aryStrPerms[t_i];
		}
	}

	return "";
}

#if _EDITOR

int C184::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		// strip off the | from the end
		t_strInput = t_strInput.substr(0, t_strInput.length() - 1);

		// figure out what the line is and print it
		//cout << strDecodeBWT(t_strInput) << endl;
	}

	t_file.close();

	return 0;
}
