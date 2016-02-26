#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "104cpp.h"

int CP104::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		while (getline(line, t_str, ';'))
		{
			if (t_str == "zero")
			{
				cout << "0";
			}
			else if (t_str == "one")
			{
				cout << "1";
			}
			else if (t_str == "two")
			{
				cout << "2";
			}
			else if (t_str == "three")
			{
				cout << "3";
			}
			else if (t_str == "four")
			{
				cout << "4";
			}
			else if (t_str == "five")
			{
				cout << "5";
			}
			else if (t_str == "six")
			{
				cout << "6";
			}
			else if (t_str == "seven")
			{
				cout << "7";
			}
			else if (t_str == "eight")
			{
				cout << "8";
			}
			else if (t_str == "nine")
			{
				cout << "9";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
