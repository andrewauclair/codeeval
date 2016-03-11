#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "113cpp.h"

int C113::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;

	while (getline(t_file, t_strInput))
	{
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), '|'), t_strInput.end());

		istringstream line(t_strInput);
		vector<int> t_aryValues = vector<int>();


		while (getline(line, t_str, ' '))
		{
			//cout << t_str < " ";
			t_aryValues.push_back(atoi(t_str.c_str()));	
		}
		//cout << endl;
		for (unsigned int t_i = 0; t_i < t_aryValues.size() / 2; ++t_i)
		{
			cout << t_aryValues[t_i] * t_aryValues[(t_aryValues.size() / 2) + 1 + t_i];

			if (t_i + 1 < t_aryValues.size() / 2)
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
