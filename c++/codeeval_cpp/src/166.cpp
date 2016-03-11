#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

#if _EDITOR

#include "166cpp.h"

int C166::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		replace(t_strInput.begin(), t_strInput.end(), ':', ' ');

		int t_aValues[6];
		istringstream line(t_strInput);
		string t_str;

		for (int t_i = 0; t_i < 6; ++t_i)
		{
			getline(line, t_str, ' ');
			t_aValues[t_i] = atoi(t_str.c_str());
		}

		int t_nHours = t_aValues[0] - t_aValues[3];
		int t_nMinutes = t_aValues[1] - t_aValues[4];
		int t_nSeconds = t_aValues[2] - t_aValues[5];

		t_nSeconds = abs((t_nHours * 3600) + (t_nMinutes * 60) + t_nSeconds);
		t_nHours = t_nSeconds / 3600;
		t_nSeconds -= t_nHours * 3600;
		t_nMinutes = t_nSeconds / 60;
		t_nSeconds -= t_nMinutes * 60;

		cout << setfill('0') << setw(2) << t_nHours << ":";
		cout << setfill('0') << setw(2) << t_nMinutes << ":";
		cout << setfill('0') << setw(2) << t_nSeconds << endl;
	}

	t_file.close();

	return 0;
}
