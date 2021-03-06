#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "9cpp.h"

int C9::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	vector<string> t_aStrValues = vector<string>();
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			t_aStrValues.push_back(t_str);
		}

		for (int t_i = t_aStrValues.size() - 1; t_i >= 0; t_i -= 2)
		{
			cout << t_aStrValues[t_i] << " ";
		}

		t_aStrValues.clear();

		cout << endl;
	}

	t_file.close();

	return 0;
}
