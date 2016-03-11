#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "211cpp.h"

int C211::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		int t_cFound = 0;

		istringstream line(t_strInput);
		
		string t_strWines;
		string t_strLetters;

		getline(line, t_strWines, '|');
		getline(line, t_strLetters, '|');
		t_strLetters = t_strLetters.substr(1);

		string t_strWine;

		istringstream line2(t_strWines);

		while (getline(line2, t_strWine, ' '))
		{
			string t_strWineLower = t_strWine;

			bool t_fContainsAll = true;

			for (unsigned int t_i = 0; t_i < t_strLetters.length(); ++t_i)
			{
				if (t_strWineLower.find(t_strLetters.substr(t_i, 1)) == string::npos)
				{
					t_fContainsAll = false;
				}
				else
				{
					t_strWineLower[t_strWineLower.find(t_strLetters.substr(t_i, 1))] = ' ';
				}
			}

			if (t_fContainsAll)
			{
				if (t_cFound > 0)
				{
					cout << " ";
				}

				cout << t_strWine;
				t_cFound++;
			}
		}

		if (t_cFound == 0)
		{
			cout << "False";
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
