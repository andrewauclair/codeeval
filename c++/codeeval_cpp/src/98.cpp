#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "98cpp.h"

int C98::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strInput;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		t_strInput = t_strInput.substr(9, t_strInput.length());
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), ' '), t_strInput.end());
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), '('), t_strInput.end());
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), ')'), t_strInput.end());
		t_strInput.erase(std::remove(t_strInput.begin(), t_strInput.end(), ':'), t_strInput.end());
		std::replace(t_strInput.begin(), t_strInput.end(), ';', ',');
		t_strInput.replace(t_strInput.find("Point"), 5, "");
		t_strInput.replace(t_strInput.find("Radius"), 6, "");

		//cout << t_strInput << endl;
		istringstream line(t_strInput);

		float t_arVals[5];
		int t_nNum = 0;

		while (getline(line, t_str, ','))
		{
			t_arVals[t_nNum] = (float)atoi(t_str.c_str());
			t_nNum++;
		}

		// calculate distance from center
		float t_x = t_arVals[3] - t_arVals[0];
		float t_y = t_arVals[4] - t_arVals[1];

		if (sqrt((float)(t_x * t_x) + (t_y * t_y)) <= t_arVals[2])
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}

	t_file.close();

	return 0;
}
