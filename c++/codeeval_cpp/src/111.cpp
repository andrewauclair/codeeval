#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "111cpp.h"

int CP111::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;
	int t_nChange = 0;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		unsigned int t_nLongest = 0;
		string t_strLongest;

		while (getline(line, t_str, ' '))
		{
			if (t_str.size() > t_nLongest)
			{
				t_nLongest = t_str.size();
				t_strLongest = t_str;
			}
		}

		cout << t_strLongest << endl;
	}

	t_file.close();

	return 0;
}
