#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "208cpp.h"

int CP208::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;
	string t_strSet;
	string t_strValue;

	vector<int> t_aValues = vector<int>();

	while (getline(t_file, t_strInput))
	{
		istringstream t_issSet(t_strInput);

		// split the line by |
		while (getline(t_issSet, t_strSet, '|'))
		{
			if (t_strSet[0] == ' ')
			{
				t_strSet = t_strSet.substr(1);
			}

			unsigned int t_i = 0;
			istringstream t_issValue(t_strSet);
			
			while (getline(t_issValue, t_strValue, ' '))
			{
				if (t_aValues.size() < t_i + 1)
				{
					t_aValues.push_back(atoi(t_strValue.c_str()));
				}
				else
				{
					int t_n = atoi(t_strValue.c_str());
					if (t_n > t_aValues[t_i])
					{
						t_aValues[t_i] = t_n;
					}
				}
				t_i++;
			}
		}

		for (unsigned int t_i = 0; t_i < t_aValues.size(); ++t_i)
		{
			cout << t_aValues[t_i];
			if (t_i + 1 < t_aValues.size())
			{
				cout << " ";
			}
		}

		cout << endl;

		t_aValues.clear();
	}

	t_file.close();

	return 0;
}
