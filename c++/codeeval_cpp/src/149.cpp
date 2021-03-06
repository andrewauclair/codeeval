#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdint>
using namespace std;

#if _EDITOR

#include "149cpp.h"

int C149::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		vector<string> t_pairs = vector<string>();
		uint64_t t_num = 0;

		istringstream line(t_strInput);
		string t_str;
		string t_strNum;

		while (getline(line, t_str, ' '))
		{
			t_pairs.push_back(t_str);
		}

		for (unsigned int t_i = 0; t_i < t_pairs.size(); t_i += 2)
		{
			// check key
			if (t_pairs[t_i].compare("0") == 0)
			{
				t_strNum += t_pairs[t_i + 1];
			}
			else if (t_pairs[t_i].compare("00") == 0)
			{
				t_strNum += string(t_pairs[t_i + 1].length(), '1');
			}
		}

		// strip 0's off the front of the string
		int t_firstOne = t_strNum.find_first_of('1');
		if (t_firstOne != -1)
		{
			t_strNum = t_strNum.substr(t_firstOne);
		}

		for (unsigned int t_i = 0; t_i < t_strNum.length(); ++t_i)
		{
			int t_n = t_strNum[t_i] - '0';
			int t_len = t_strNum.length();
			uint64_t t_or = t_n << (t_len - t_i - 1);
			t_num |= t_n << (t_len - t_i - 1);
		}

		cout << t_num << endl;
	}

	t_file.close();

	return 0;
}
