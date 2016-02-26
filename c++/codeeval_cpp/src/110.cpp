#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "110cpp.h"

bool CP110::fNumber(string p_str)
#else
bool fNumber(string p_str)
#endif
{
	if (p_str == "zero" || p_str == "one" || p_str == "two" || p_str == "three" || p_str == "four" || p_str == "five" || p_str == "six" ||
		p_str == "seven" || p_str == "eight" || p_str == "nine" || p_str == "ten" || p_str == "eleven" || p_str == "twelve" || p_str == "thirteen" || p_str == "fourteen" ||
		p_str == "fifteen" || p_str == "sixteen" || p_str == "seventeen" || p_str == "eighteen" || p_str == "nineteen" || p_str == "twenty" || p_str == "thirty" || p_str == "forty" ||
		p_str == "fifty" || p_str == "sixty" || p_str == "seventy" || p_str == "eighty" || p_str == "ninety")
	{
		return true;
	}
	return false;
}

#if _EDITOR
bool CP110::fCount(string p_str)
#else
bool fCount(string p_str)
#endif
{
	if (p_str == "hundred" || p_str == "thousand" || p_str == "million")
	{
		return true;
	}
	return false;
}

#if _EDITOR
int CP110::nNumber(string p_str)
#else
int nNumber(string p_str)
#endif
{
	if (p_str == "zero")
	{
		return 0;
	}
	else if (p_str == "one")
	{
		return 1;
	}
	else if (p_str == "two")
	{
		return 2;
	}
	else if (p_str == "three")
	{
		return 3;
	}
	else if (p_str == "four")
	{
		return 4;
	}
	else if (p_str == "five")
	{
		return 5;
	}
	else if (p_str == "six")
	{
		return 6;
	}
	else if (p_str == "seven")
	{
		return 7;
	} 
	else if (p_str == "eight") 
	{
		return 8;
	}
	else if (p_str == "nine") 
	{ 
		return 9;
	} 
	else if (p_str == "ten") 
	{
		return 10;
	} 
	else if (p_str == "eleven") 
	{
		return 11;
	} 
	else if (p_str == "twelve")
	{
		return 12;
	}
	else if (p_str == "thirteen") 
	{
		return 13;
	}
	else if (p_str == "fourteen")
	{
		return 14;
	}
	else if (p_str == "fifteen") 
	{
		return 15;
	}
	else if (p_str == "sixteen")
	{
		return 16;
	}
	else if (p_str == "seventeen")
	{
		return 17;
	}
	else if (p_str == "eighteen")
	{
		return 18;
	}
	else if (p_str == "nineteen")
	{
		return 19;
	}
	else if (p_str == "twenty")
	{
		return 20;
	}
	else if (p_str == "thirty")
	{
		return 30;
	}
	else if (p_str == "forty")
	{
		return 40;
	}
	else if (p_str == "fifty")
	{
		return 50;
	}
	else if (p_str == "sixty")
	{
		return 60;
	}
	else if (p_str == "seventy")
	{
		return 70;
	}
	else if (p_str == "eighty")
	{
		return 80;
	}
	else if (p_str == "ninety")
	{
		return 90;
	}
	
	return 0;
}

#if _EDITOR
int CP110::nCount(string p_str)
#else
int nCount(string p_str)
#endif
{
	if (p_str == "hundred")
	{
		return 100;
	}
	else if (p_str == "thousand")
	{
		return 1000;
	}
	else if (p_str == "million")
	{
		return 1000000;
	}
	return 0;
}

#if _EDITOR

int CP110::nRun(int argc, const char * argv[])
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
		bool t_fNegative = false;
		int t_nValue = 0;
		int t_nNum = 0;
		int t_nCount = 0;
		int t_nTemp = 0;

		while (getline(line, t_str, ' '))
		{
			if (t_str.compare("negative") == 0)
			{
				t_fNegative = true;
				continue;
			}

			if (fNumber(t_str))
			{
				t_nNum += nNumber(t_str);
			}

			if (fCount(t_str))
			{
				t_nCount = nCount(t_str);

				if (t_nCount != 100)
				{
					t_nNum += t_nTemp;
					t_nValue += t_nCount * t_nNum;
					t_nNum = 0;
					t_nTemp = 0;
				}
				else if (t_nCount == 100)
				{
					t_nTemp = t_nCount * t_nNum;
					t_nNum = 0;
				}
			}
		}

		t_nValue += t_nTemp + t_nNum;
	
		if (t_fNegative)
		{
			cout << "-";
		}
		cout << t_nValue << endl;
	}

	t_file.close();

	return 0;
}
