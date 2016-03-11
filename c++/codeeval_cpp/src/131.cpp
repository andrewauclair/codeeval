#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "131cpp.h"

int C131::nRun(int argc, const char * argv[])
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

		getline(line, t_str, ' ');

		string t_strNum = t_str;

		getline(line, t_str, ' ');

		string t_strPattern = t_str;

		istringstream line2(t_strPattern);

		if (t_strPattern.find('+') != std::string::npos)
		{
			// +
			getline(line2, t_str, '+');
			string t_strEnd;
			getline(line2, t_strEnd, '+');

			cout << atoi(t_strNum.substr(0, t_str.length()).c_str()) + atoi(t_strNum.substr(t_str.length(), t_strEnd.length()).c_str()) << endl;
		}
		else
		{
			getline(line2, t_str, '-');
			string t_strEnd;
			getline(line2, t_strEnd, '-');

			cout << atoi(t_strNum.substr(0, t_str.length()).c_str()) - atoi(t_strNum.substr(t_str.length(), t_strEnd.length()).c_str()) << endl;
		}
	}

	t_file.close();

	return 0;
}
