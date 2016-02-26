#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

#if _EDITOR

#include "101cpp.h"

int CP101::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		t_strInput.erase(remove(t_strInput.begin(), t_strInput.end(), ' '), t_strInput.end());
		t_strInput.erase(remove(t_strInput.begin(), t_strInput.end(), '('), t_strInput.end());
		t_strInput.erase(remove(t_strInput.begin(), t_strInput.end(), ')'), t_strInput.end());

		istringstream line(t_strInput);
		string t_str;
		vector<int> t_values = vector<int>();

		while (getline(line, t_str, ','))
		{
			t_values.push_back(atoi(t_str.c_str()));
		}

		int t_ax = INT_MAX;
		int t_ay = INT_MIN;
		int t_bx = INT_MIN;
		int t_by = INT_MIN;
		int t_cx = INT_MIN;
		int t_cy = INT_MAX;
		int t_dx = INT_MAX;
		int t_dy = INT_MAX;

		// ax is the highest y with the lowest x
		for (int t_i = 0; t_i < 7; t_i += 2)
		{
			if (t_values[t_i + 1] > t_ay || (t_values[t_i + 1] == t_ay && t_values[t_i] < t_ax))
			{
				t_ay = t_values[t_i + 1];
				t_ax = t_values[t_i];
			}
		}

		// b is the highest y with the highest x
		for (int t_i = 0; t_i < 7; t_i += 2)
		{
			if (t_values[t_i] > t_bx || (t_values[t_i] == t_bx && t_values[t_i + 1] > t_by))
			{
				t_by = t_values[t_i + 1];
				t_bx = t_values[t_i];
			}
		}

		// c is the lowest y with the highest x
		for (int t_i = 0; t_i < 7; t_i += 2)
		{
			if (t_values[t_i + 1] < t_cy || (t_values[t_i + 1] == t_cy && t_values[t_i] > t_cx))
			{
				t_cy = t_values[t_i + 1];
				t_cx = t_values[t_i];
			}
		}

		// d is the lowest y with the lowest x
		for (int t_i = 0; t_i < 7; t_i += 2)
		{
			if (t_values[t_i] < t_dx || (t_values[t_i] == t_dx && t_values[t_i + 1] < t_dy))
			{
				t_dy = t_values[t_i + 1];
				t_dx = t_values[t_i];
			}
		}

		int t_bax = t_bx - t_ax;
		int t_bay = t_by - t_ay;
		int t_dax = t_dx - t_ax;
		int t_day = t_dy - t_ay;
		int t_bcx = t_bx - t_cx;
		int t_bcy = t_by - t_cy;
		int t_dcx = t_dx - t_cx;
		int t_dcy = t_dy - t_cy;

		int t_balen = t_bax * t_bax + t_bay * t_bay;
		int t_dalen = t_dax * t_dax + t_day * t_day;

		if (t_bax * t_dax + t_bay * t_day == 0 &&
			t_bcx * t_dcx + t_bcy * t_dcy == 0 &&
			t_balen == t_dalen && t_balen > 0)
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
