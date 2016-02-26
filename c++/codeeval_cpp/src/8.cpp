#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "8cpp.h"

int CP8::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		vector<string> t_arystrs = vector<string>();

		istringstream line(t_strInput);

		while (getline(line, t_str, ' '))
		{
			t_arystrs.push_back(t_str);
		}

		cout << t_arystrs[t_arystrs.size()-1];
		for (int t_i = t_arystrs.size() - 2; t_i >= 0; --t_i)
		{
			cout << " " << t_arystrs[t_i];
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
