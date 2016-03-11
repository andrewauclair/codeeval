#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "227cpp.h"

int C227::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), ' '), t_strInput.end());

		int t_nTotal = 0;

		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			char t_c = t_strInput[t_i];
			int t_n = atoi(&t_c);

			if (t_i % 2 == 0)
			{
				t_n *= 2;
			}

			t_nTotal += t_n;
		}

		if (t_nTotal % 10 == 0)
		{
			cout << "Real" << endl;
		}
		else
		{
			cout << "Fake" << endl;
		}
	}

	t_file.close();

	return 0;
}
