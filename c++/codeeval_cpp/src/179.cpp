#include <iostream>
#include <fstream>
#include <cstdint>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "179cpp.h"

int CP179::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	uint8_t t_anNumbers[10] = 
	{ 
		252,	// 0 
		96,		// 1 
		218,	// 2
		242,	// 3
		102,	// 4
		182,	// 5
		190,	// 6
		224,	// 7
		254,	// 8
		246		// 9
	};

	uint8_t t_anDisplays[12];
	string t_str;

	for (int t_i = 0; t_i < 12; ++t_i)
	{
		t_anDisplays[t_i] = 0;
	}

	while (getline(t_file, t_strInput))
	{
		for (int t_i = 0; t_i < 12; ++t_i)
		{
			t_anDisplays[t_i] = 0;
		}

		istringstream line(t_strInput);
		string t_strDisplays;
		string t_strValue;
		getline(line, t_strDisplays, ';');
		getline(line, t_strValue, ';');
		istringstream line2(t_strDisplays);
		int t_iDisplay = 0;

		while (getline(line2, t_str, ' '))
		{
			for (int t_i = 0; t_i < 8; ++t_i)
			{
				int one = t_str[t_i] - '0';

				t_anDisplays[t_iDisplay] |= one << (8 - t_i - 1);
			}
			t_iDisplay++;
		}
		
		bool t_fCorrect = true;

		if (t_strValue.length() - 1 > 12)
		{
			t_fCorrect = false;
		}
		else
		{
			for (unsigned int t_id = 0; t_id <= 12 - (t_strValue.length() - 1); ++t_id)
			{
				t_fCorrect = true;
				for (unsigned int t_i = 0; t_i < t_strValue.length(); ++t_i)
				{
					if (t_strValue[t_i] == '.')
					{
						continue;
					}
					else
					{
						bool t_fPeriod = false;
						if (t_i + 1 < t_strValue.length())
						{
							if (t_strValue[t_i + 1] == '.')
							{
								t_fPeriod = true;
							}
						}

						int n = t_strValue[t_i] - '0';
						int num = t_anNumbers[n];
						int cor = t_anDisplays[t_id];
						if (t_fPeriod)
						{
							num |= 1;
						}

						int v = cor & num;
						if (v != num)
						{
							// something can't be displayed
							t_fCorrect = false;
							break;
						}

						t_id++;
					}
				}

				if (t_fCorrect)
				{
					cout << "1" << endl;
					break;
				}
			}
		}

		if (!t_fCorrect)
		{
			cout << "0" << endl;
		}
	}

	t_file.close();

	return 0;
}
