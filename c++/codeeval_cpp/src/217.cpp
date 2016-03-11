#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "217cpp.h"

static const bool fsc_fFinished = true;

int C217::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		int t_nZeros = 0;
		int t_nNumbers = 0;
		int t_cValid = 0;

		istringstream line(t_strInput);
		string t_strTemp;
		getline(line, t_strTemp, ' ');
		t_nZeros = atoi(t_strTemp.c_str());
		getline(line, t_strTemp, ' ');
		t_nNumbers = atoi(t_strTemp.c_str());

		for (int t_i = 1; t_i <= t_nNumbers; ++t_i)
		{
			int t_nTest = t_i;
			int t_c = 0;
			int t_cDigits = 0;

			for (t_cDigits = 0; t_nTest > 0; t_nTest >>= 1)
			{
				t_cDigits++;
			}
			t_nTest = t_i;

			for (; t_nTest; ++t_c)
			{
				t_nTest &= (t_nTest - 1);
			}

			if (t_cDigits - t_c == t_nZeros)
			{
				t_cValid++;
			}
		}

		cout << t_cValid << endl;
	}

	t_file.close();

	return 0;
}
