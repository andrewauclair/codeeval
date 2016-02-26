#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "232cpp.h"

// Stupid sort is a bubble sort that restarts after the first swap of every iteration
void CP232::vStupidSort(vector<int> &p_vector, int p_cIterations)
#else
void vStupidSort(vector<int> &p_vector, int p_cIterations)
#endif
{
	for (unsigned int t_i = 1; t_i < p_vector.size(); ++t_i)
	{
		if (p_vector[t_i] < p_vector[t_i - 1])
		{
			int t_num = p_vector[t_i];
			p_vector[t_i] = p_vector[t_i - 1];
			p_vector[t_i - 1] = t_num;

			t_i = 0;
			p_cIterations--;

			if (p_cIterations == 0)
			{
				return;
			}
			continue;
		}
	}
}

#if _EDITOR

int CP232::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);

	string t_strInput;
	string t_strIterations;
	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_str, '|');
		getline(line, t_strIterations, '|');

		istringstream line2(t_str);

		string t_strNum;
		vector<int> t_aNumbers = vector<int>();

		while (getline(line2, t_strNum, ' '))
		{
			t_aNumbers.push_back(atoi(t_strNum.c_str()));
		}

		vStupidSort(t_aNumbers, atoi(t_strIterations.c_str()));

		for (unsigned int t_i = 0; t_i < t_aNumbers.size(); ++t_i)
		{
			cout << t_aNumbers[t_i];
			if (t_i < t_aNumbers.size() + 1)
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
