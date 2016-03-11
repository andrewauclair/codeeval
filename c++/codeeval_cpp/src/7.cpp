#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

#if _EDITOR

#include "7cpp.h"

float C7::rEval(vector<string>::iterator &p_it)
#else
float rEval(vector<string>::iterator &p_it)
#endif
{
	if (*p_it == "*")
	{
		return rEval(++p_it) * rEval(++p_it);
	}
	else if (*p_it == "/")
	{
		return rEval(++p_it) / rEval(++p_it);
	}
	else if (*p_it == "+")
	{
		return rEval(++p_it) + rEval(++p_it);
	}
	else
	{
		return (float)atof((*p_it).c_str());
	}
}

#if _EDITOR

int C7::nRun(int argc, const char * argv[])
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

		vector<string>::iterator t_it = t_aStrValues.begin();

		cout << (int)floor(rEval(t_it) + 0.5f) << endl;

		t_aStrValues.clear();
	}

	t_file.close();

	return 0;
}
