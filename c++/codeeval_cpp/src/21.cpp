#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "21cpp.h"

int CP21::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	int t_nValue = 0;
	int t_nTotal = 0;
	string t_strVal;

	stringstream t_ss;

	while (!t_file.eof())
	{
		if (t_nValue > 0)
		{
			cout << endl;
		}

		t_file >> t_nValue;

		t_ss << t_nValue;

		t_strVal = t_ss.str();
		t_ss.str("");

		t_nTotal = 0;
		char t_ch;
		for (unsigned int t_i = 0; t_i < t_strVal.length(); ++t_i)
		{
			t_ch = t_strVal[t_i];

			t_nTotal += atoi(&t_ch);
		}

		cout << t_nTotal;
	}

	t_file.close();

	return 0;
}
