#include <iostream>
#include <fstream>
#include <string>
#include <locale>
using namespace std;

#if _EDITOR

#include "20cpp.h"

int CP20::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strLine;
	locale t_loc;

	while (!t_file.eof())
	{
		getline(t_file, t_strLine);

		for (string::size_type t_i = 0; t_i < t_strLine.length(); ++t_i)
		{
			cout << tolower(t_strLine[t_i], t_loc);
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
