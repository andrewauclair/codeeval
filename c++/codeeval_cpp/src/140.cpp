#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "140cpp.h"

int C140::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		vector<string> t_aryStrWords = vector<string>();
		vector<int> t_arynOrder = vector<int>();

		string t_strWords;

		getline(line, t_strWords, ';');

		istringstream line2(t_strWords);

		while (getline(line2, t_str, ' '))
		{
			t_aryStrWords.push_back(t_str);
		}

		string t_strOrder;

		getline(line, t_strOrder, ';');

		istringstream line3(t_strOrder);

		while (getline(line3, t_str, ' '))
		{
			t_arynOrder.push_back(atoi(t_str.c_str()));
		}

		for (unsigned int t_i = 0; t_i < t_aryStrWords.size(); ++t_i)
		{
			bool t_fFound = false;

			for (unsigned int t_j = 0; t_j < t_arynOrder.size(); ++t_j)
			{
				if (t_arynOrder[t_j] == t_i + 1)
				{
					t_fFound = true;
					break;
				}
			}

			if (!t_fFound)
			{
				t_arynOrder.push_back(t_i + 1);
			}
		}

		bool t_fSwapped = true;

		while (t_fSwapped)
		{
			t_fSwapped = false;
			for (unsigned int t_i = 0; t_i < t_arynOrder.size() - 1; ++t_i)
			{
				if (t_arynOrder[t_i] > t_arynOrder[t_i + 1])
				{
					int t_nTemp = t_arynOrder[t_i];
					t_arynOrder[t_i] = t_arynOrder[t_i + 1];
					t_arynOrder[t_i + 1] = t_nTemp;

					string t_strTemp = t_aryStrWords[t_i];
					t_aryStrWords[t_i] = t_aryStrWords[t_i + 1];
					t_aryStrWords[t_i + 1] = t_strTemp;

					t_fSwapped = true;
				}
			}
		}

		for (unsigned int t_i = 0; t_i < t_aryStrWords.size(); ++t_i)
		{
			cout << t_aryStrWords[t_i];

			if (t_i + 1 < t_aryStrWords.size())
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
