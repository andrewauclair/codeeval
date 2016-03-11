#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "34cpp.h"

int C34::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;
	string t_strValue;
	
	vector<int> t_anValues = vector<int>();
	int t_x;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		getline(line, t_str, ';');
		
		istringstream values(t_str);

		while (getline(values, t_str, ','))
		{
			t_anValues.push_back(atoi(t_str.c_str()));
		}

		getline(line, t_str, ';');

		t_x = atoi(t_str.c_str());

		int t_Cairs = 0;
		bool t_fFirst = true;

		vector<int> t_anFirst = vector<int>();
		vector<int> t_anSecond = vector<int>();

		for (unsigned int t_i = 0; t_i < t_anValues.size(); ++t_i)
		{
			for (unsigned int t_j = t_i + 1; t_j < t_anValues.size(); ++t_j)
			{
				if (t_anValues[t_i] + t_anValues[t_j] == t_x)
				{
					bool t_fPrint = true;

					for (unsigned int t_k = 0; t_k < t_anFirst.size(); ++t_k)
					{
						if (t_anFirst[t_k] == t_anValues[t_i] &&
							t_anSecond[t_k] == t_anValues[t_j])
						{
							t_fPrint = false;
						}
					}

					if (t_fPrint)
					{
						if (!t_fFirst)
						{
							cout << ";";
						}

						t_fFirst = false;
						t_Cairs++;

						cout << t_anValues[t_i] << "," << t_anValues[t_j];

						t_anFirst.push_back(t_anValues[t_i]);
						t_anSecond.push_back(t_anValues[t_j]);
					}
				}
			}
		}

		t_anValues.clear();

		if (t_Cairs == 0)
		{
			cout << "NULL";
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
