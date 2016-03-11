#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "6cpp.h"

int C6::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_strLeft;
	string t_strRight;
	string t_strCommon;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		t_strCommon = "";

		istringstream line(t_strInput);

		getline(line, t_strLeft, ';');
		getline(line, t_strRight, ';');

		for (unsigned int t_k = 0; t_k < t_strLeft.length(); ++t_k)
		{
			string t_str = "";
			int t_iLast = 0;

			for (unsigned int t_i = t_k; t_i < t_strLeft.length(); ++t_i)
			{
				for (unsigned int t_j = t_iLast; t_j < t_strRight.length(); ++t_j)
				{
					if (t_strLeft[t_i] == t_strRight[t_j])
					{
						t_iLast = t_j + 1;
						t_str += t_strLeft[t_i];
						break;
					}
				}
			}

			t_str.erase(std::remove(t_str.begin(), t_str.end(), ' '), t_str.end());


			if (t_str.length() > t_strCommon.length())
			{
				t_strCommon = t_str;
			}
		}

		for (unsigned int t_k = 0; t_k < t_strRight.length(); ++t_k)
		{
			string t_str = "";
			int t_iLast = 0;

			for (unsigned int t_i = t_k; t_i < t_strRight.length(); ++t_i)
			{
				for (unsigned int t_j = t_iLast; t_j < t_strLeft.length(); ++t_j)
				{
					if (t_strRight[t_i] == t_strLeft[t_j])
					{
						t_iLast = t_j + 1;
						t_str += t_strRight[t_i];
						break;
					}
				}
			}

			t_str.erase(std::remove(t_str.begin(), t_str.end(), ' '), t_str.end());

			if (t_str.length() > t_strCommon.length())
			{
				t_strCommon = t_str;
			}
		}

		size_t t_last = t_strCommon.find_last_not_of(' ');
		t_strCommon = t_strCommon.substr(0, t_last + 1);

		cout << t_strCommon << endl;
	}

	t_file.close();

	return 0;
}
