#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "172cpp.h"

int CP172::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		string t_strCard;
		istringstream line(t_strInput);
		string t_str;

		while (getline(line, t_str, ' '))
		{
			t_strCard += t_str;
		}

		int t_c = 0;
		int t_iOdd = 0;

		// loop through the numbers
		for (int t_i = t_strCard.length() - 1; t_i >= 0; --t_i, ++t_iOdd)
		{
			int t_n = atoi(t_strCard.substr(t_i, 1).c_str());

			if (t_iOdd % 2 != 0)
			{
				// double the number
				t_n *= 2;
			}

			if (t_n > 9)
			{
				t_n = (t_n / 10) + (t_n % 10);
			}

			t_c += t_n;
		}

		if (t_c % 10 == 0)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}

	t_file.close();

	return 0;
}
