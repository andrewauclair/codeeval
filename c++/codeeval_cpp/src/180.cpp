#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#if _EDITOR

#include "180cpp.h"

void C180::vBubbleSort(vector<char> &p_v1, vector<int> &p_v2)
#else
void vBubbleSort(vector<char> &p_v1, vector<int> &p_v2)
#endif
{
	bool t_fSwapped = false;
	
	do
	{
		t_fSwapped = false;

		for (unsigned int t_i = 1; t_i < p_v1.size(); ++t_i)
		{
			if (p_v1[t_i] < p_v1[t_i - 1] || (p_v1[t_i] == p_v1[t_i - 1] && p_v2[t_i] < p_v2[t_i - 1]))
			{
				int t_c = p_v1[t_i];
				p_v1[t_i] = p_v1[t_i - 1];
				p_v1[t_i - 1] = t_c;

				int t_n = p_v2[t_i];
				p_v2[t_i] = p_v2[t_i - 1];
				p_v2[t_i - 1] = t_n;

				t_fSwapped = true;
			}
		}
	} while (t_fSwapped);
}

#if _EDITOR

int C180::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		vector<char> t_aLetter = vector<char>();
		vector<int> t_aNumber = vector<int>();

		char t_char = t_strInput[0];
		int t_num = atoi(t_strInput.substr(1,1).c_str());

		t_aLetter.push_back(t_char - 2);
		t_aNumber.push_back(t_num - 1);

		t_aLetter.push_back(t_char - 2);
		t_aNumber.push_back(t_num + 1);

		t_aLetter.push_back(t_char - 1);
		t_aNumber.push_back(t_num + 2);

		t_aLetter.push_back(t_char - 1);
		t_aNumber.push_back(t_num - 2);

		t_aLetter.push_back(t_char + 1);
		t_aNumber.push_back(t_num + 2);
		
		t_aLetter.push_back(t_char + 1);
		t_aNumber.push_back(t_num - 2);

		t_aLetter.push_back(t_char + 2);
		t_aNumber.push_back(t_num - 1);

		t_aLetter.push_back(t_char + 2);
		t_aNumber.push_back(t_num + 1);
		
		

		// strip out the ones that outside of a-h or 1-8
		for (unsigned int t_i = 0; t_i < t_aLetter.size(); ++t_i)
		{
			if (t_aLetter[t_i] < 'a' || t_aLetter[t_i] > 'h')
			{
				t_aLetter.erase(t_aLetter.begin() + t_i);
				t_aNumber.erase(t_aNumber.begin() + t_i);
				t_i--;
			}
			else if (t_aNumber[t_i] < 1 || t_aNumber[t_i] > 8)
			{
				t_aLetter.erase(t_aLetter.begin() + t_i);
				t_aNumber.erase(t_aNumber.begin() + t_i);
				t_i--;
			}
		}

		vBubbleSort(t_aLetter, t_aNumber);

		for (unsigned int t_i = 0; t_i < t_aLetter.size(); ++t_i)
		{
			cout << t_aLetter[t_i] << t_aNumber[t_i];

			if (t_i + 1 < t_aLetter.size())
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
