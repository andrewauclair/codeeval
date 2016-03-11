#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#if _EDITOR

#include "108cpp.h"

int C108::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	vector<string> t_aDisplay = vector<string>();

	for (int t_i = 0; t_i < 10; ++t_i)
	{
		t_aDisplay.push_back(string(10, ' '));
	}

	int t_iRow = 0;
	int t_iCol = 0;

	bool t_fOverwrite = true;
	bool t_fInsert = false;

	while (getline(t_file, t_strInput))
	{
		unsigned int t_i = 0;

		while (t_i < t_strInput.length())
		{
			string t_strSeq = t_strInput.substr(t_i, 2);

			if (t_strSeq[0] == '^')
			{
				if (t_strSeq.compare("^c") == 0)
				{
					for (int t_j = 0; t_j < 10; ++t_j)
					{
						t_aDisplay[t_j] = string(10, ' ');
					}
				}
				else if (t_strSeq.compare("^h") == 0)
				{
					t_iRow = 0;
					t_iCol = 0;
				}
				else if (t_strSeq.compare("^b") == 0)
				{
					t_iCol = 0;
				}
				else if (t_strSeq.compare("^d") == 0)
				{
					if (t_iRow < 9)
					{
						t_iRow++;
					}
				}
				else if (t_strSeq.compare("^u") == 0)
				{
					if (t_iRow > 0)
					{
						t_iRow--;
					}
				}
				else if (t_strSeq.compare("^l") == 0)
				{
					if (t_iCol > 0)
					{
						t_iCol--;
					}
				}
				else if (t_strSeq.compare("^r") == 0)
				{
					if (t_iCol < 9)
					{
						t_iCol++;
					}
				}
				else if (t_strSeq.compare("^e") == 0)
				{
					t_aDisplay[t_iRow] = t_aDisplay[t_iRow].substr(0, t_iCol) + string(' ', 10 - t_iCol);
				}
				else if (t_strSeq.compare("^i") == 0)
				{
					t_fOverwrite = false;
					t_fInsert = true;
				}
				else if (t_strSeq.compare("^o") == 0)
				{
					t_fOverwrite = true;
					t_fInsert = false;
				}
				else if (t_strSeq.compare("^^") == 0)
				{
					if (t_fOverwrite)
					{
						t_aDisplay[t_iRow][t_iCol] = '^';
					}
					else
					{
						t_aDisplay[t_iRow].insert(t_iCol, 1, '^');
						t_aDisplay[t_iRow] = t_aDisplay[t_iRow].substr(0, 10);
					}
				}
				else
				{
					t_strSeq = t_strInput.substr(t_i, 3);

					t_iRow = atoi(t_strSeq.substr(1, 1).c_str());
					t_iCol = atoi(t_strSeq.substr(2, 1).c_str());

					t_i += 1;
				}

				t_i += 2;
			}
			else
			{
				string t_str = t_strInput.substr(t_i, 1);

				if (t_fOverwrite)
				{
					t_aDisplay[t_iRow].replace(t_iCol, t_str.length(), t_str);
				}
				else
				{
					t_aDisplay[t_iRow].insert(t_iCol, t_str);
					t_aDisplay[t_iRow] = t_aDisplay[t_iRow].substr(0, 10);
				}

				t_iCol += t_str.length();

				if (t_iCol > 9)
				{
					t_iCol = 9;
				}

				t_i += t_str.length();
			}
		}
	}

	for (int t_i = 0; t_i < 10; ++t_i)
	{
		cout << t_aDisplay[t_i] << endl;
	}

	t_file.close();

	return 0;
}
