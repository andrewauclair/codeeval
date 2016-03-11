#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "28cpp.h"

int C28::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;
	string t_strSearch;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_str, ',');
		getline(line, t_strSearch, ',');

		int t_c = 0;
		bool t_fFound = false;

		for (unsigned int t_j = 0; t_j < t_str.length(); ++t_j)
		{
			if (t_str[t_j] == t_strSearch[t_c])// || (t_strSearch[t_c] == '*' && (t_c > 0 && t_strSearch[t_c - 1] != '\\')))
			{
				t_c++;
				
				if ((unsigned int)t_c >= t_strSearch.length())
				{
					t_fFound = true;
					break;
				}
			}
			else if (t_str[t_j] == '*' && t_strSearch[t_c] == '\\' && ((unsigned int)t_c + 1 < t_strSearch.length() && t_strSearch[t_c + 1] == '*'))
			{
				t_c++;
			}
			else if (t_strSearch[t_c] == '*' && ((t_c > 0 && t_strSearch[t_c - 1] != '\\') || t_c == 0))
			{
				t_c++;

				while (t_str[t_j] != t_strSearch[t_c] && t_j < t_str.length())
				{
					t_j++;
				}

				t_c++;
			}
			else
			{
				t_c = 0;
			}
		}

		if (t_fFound)
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}

	t_file.close();

	return 0;
}
