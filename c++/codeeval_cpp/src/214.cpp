#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "214cpp.h"

void C214::vBubbleSort(vector<string> &p_vector)
#else
void vBubbleSort(vector<string> &p_vector)
#endif
{
	bool t_fSwapped = false;

	do
	{
		t_fSwapped = false;

		for (unsigned int t_i = 1; t_i < p_vector.size(); ++t_i)
		{
			if (p_vector[t_i] > p_vector[t_i - 1])
			{
				string t_str = p_vector[t_i];
				p_vector[t_i] = p_vector[t_i - 1];
				p_vector[t_i - 1] = t_str;
				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR

int C214::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;
	vector<string> t_aTimestamps = vector<string>();

	while (getline(t_file, t_strInput))
	{
		t_aTimestamps.clear();

		istringstream line(t_strInput);
		string t_strTimestamp;

		while (getline(line, t_strTimestamp, ' '))
		{
			t_aTimestamps.push_back(t_strTimestamp);
		}

		vBubbleSort(t_aTimestamps);

		for (unsigned int t_i = 0; t_i < t_aTimestamps.size(); ++t_i)
		{
			if (t_i > 0)
			{
				cout << " ";
			}
			cout << t_aTimestamps[t_i];
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
