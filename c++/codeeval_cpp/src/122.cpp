#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "122cpp.h"

int CP122::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);;
	string t_strInput;
	
	string t_str;

	while (getline(t_file, t_strInput))
	{
		bool t_fFound = false;
		for (unsigned int t_i = 0; t_i < t_strInput.size(); ++t_i)
		{
			if ((int)t_strInput[t_i] >= 97 && (int)t_strInput[t_i] <= 106)
			{
				cout << (int)t_strInput[t_i] - 97;
				t_fFound = true;
			}
			else if ((int)t_strInput[t_i] >= 48 && (int)t_strInput[t_i] <= 57)
			{
				cout << t_strInput[t_i];
				t_fFound = true;
			}
		}

		if (!t_fFound)
		{
			cout << "NONE";
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
