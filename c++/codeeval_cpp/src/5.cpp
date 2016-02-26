#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "5cpp.h"

int CP5::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	// FIX
	return -1;

	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;
	vector<string> t_aStrs = vector<string>();

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			t_aStrs.push_back(t_str);
		}

		int t_c = 50 < t_aStrs.size() ? 50 : t_aStrs.size();

		for (int t_i = t_c; t_i > 0; --t_i)
		{
			int t_t = 0;
			int t_h = 0;

			bool t_fFound = false;

			for (t_t = 0; (unsigned int)t_t < t_aStrs.size(); ++t_t, t_h += 2)
			{
				if ((unsigned int)t_h >= t_aStrs.size())
				{
					t_h -= t_aStrs.size();
				}

				if (t_aStrs[t_t].compare(t_aStrs[t_h]) == 0 && abs(t_h - t_t) == t_i)
				{
					t_fFound = true;
					break;
				}
			}

			if (t_fFound)
			{
				int t_min = t_t < t_h ? t_t : t_h;
				int t_max = t_h > t_t ? t_h : t_t;

				for (int t_k = t_min - t_i / 2; t_k < t_max - t_i / 2; ++t_k)
				{
					cout << t_aStrs[t_k] << " ";
				}

				break;
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
