#include <iostream>
#include <fstream>
#include <string>
#include <climits>
#include <sstream>
using namespace std;

#if _EDITOR

#include "183cpp.h"

int CP183::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		int t_nSmallest = INT_MAX;
		istringstream line(t_strInput);
		string t_str;

		while (getline(line, t_str, ','))
		{
			// find the first Y, count the periods before it till we reach an X
			int t_iY = t_str.find_first_of('Y');
			int t_c = 0;
			for (int t_i = t_iY - 1; t_i >= 0; --t_i)
			{
				if (t_str[t_i] == '.')
				{
					t_c++;
				}
				else if (t_str[t_i] == 'X')
				{
					break;
				}
			}
			
			if (t_c < t_nSmallest)
			{
				t_nSmallest = t_c;
			}
		}

		cout << t_nSmallest << endl;
	}

	t_file.close();

	return 0;
}
