#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "92cpp.h"

int C92::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strLast;
	string t_strInput;
	string t_str;

	while (!t_file.eof())
	{
		getline(t_file, t_strInput);

		istringstream line(t_strInput);

		vector<string> t_aryLines = vector<string>();
		while (getline(line, t_str, ' '))
		{
			t_aryLines.push_back(t_str);
		}

		if (t_aryLines.size() > 1)
		{
			cout << t_aryLines[t_aryLines.size() - 2] << endl;
		}
	}

	t_file.close();

	return 0;
}
