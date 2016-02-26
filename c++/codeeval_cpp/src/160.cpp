#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

#if _EDITOR

#include "160cpp.h"

int CP160::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		double t_rNumber = atof(t_strInput.c_str());
		int t_nAngle = (int)t_rNumber;
		t_rNumber -= (int)t_rNumber;
		int t_nMinutes = (int)(t_rNumber * 60);
		t_rNumber *= 60;
		t_rNumber -= t_nMinutes;
		int t_nSeconds = (int)(t_rNumber * 60);
		
		t_rNumber -= (int)t_rNumber;

		cout << t_nAngle << ".";
		cout << setfill('0') << setw(2) << t_nMinutes << "'";
		cout << setfill('0') << setw(2) << t_nSeconds << "\"" << endl;
	}

	t_file.close();

	return 0;
}
