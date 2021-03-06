#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "52cpp.h"

void C52::vPrintNumber(int p_nNum)
#else
void vPrintNumber(int p_nNum)
#endif
{
	int t_nUsed = 0;

	if (p_nNum >= 1000000)
	{
		int t_nMillions = p_nNum / 1000000;

		vPrintNumber(t_nMillions);

		p_nNum -= t_nMillions * 1000000;
		cout << "Million";
	}
	else if (p_nNum >= 1000)
	{
		int t_nThousands = p_nNum / 1000;
		vPrintNumber(t_nThousands);
		p_nNum -= t_nThousands * 1000;
		cout << "Thousand";
	}
	else if (p_nNum >= 100)
	{
		int t_nHundreds = p_nNum / 100;
		vPrintNumber(t_nHundreds);
		p_nNum -= t_nHundreds * 100;
		cout << "Hundred";
	}
	else if (p_nNum >= 90)
	{
		cout << "Ninety";
		t_nUsed = 90;
	}
	else if (p_nNum >= 80)
	{
		cout << "Eighty";
		t_nUsed = 80;
	}
	else if (p_nNum >= 70)
	{
		cout << "Seventy";
		t_nUsed = 70;
	}
	else if (p_nNum >= 60)
	{
		cout << "Sixty";
		t_nUsed = 60;
	}
	else if (p_nNum >= 50)
	{
		cout << "Fifty";
		t_nUsed = 50;
	}
	else if (p_nNum >= 40)
	{
		cout << "Forty";
		t_nUsed = 40;
	}
	else if (p_nNum >= 30)
	{
		cout << "Thirty";
		t_nUsed = 30;
	}
	else if (p_nNum >= 20)
	{
		cout << "Twenty";
		t_nUsed = 20;
	}
	else if (p_nNum == 19)
	{
		cout << "Nineteen";
		t_nUsed = 19;
	}
	else if (p_nNum == 18)
	{
		cout << "Eighteen";
		t_nUsed = 18;
	}
	else if (p_nNum == 17)
	{
		cout << "Seventeen";
		t_nUsed = 17;
	}
	else if (p_nNum == 16)
	{
		cout << "Sixteen";
		t_nUsed = 16;
	}
	else if (p_nNum == 15)
	{
		cout << "Fifteen";
		t_nUsed = 15;
	}
	else if (p_nNum == 14)
	{
		cout << "Fourteen";
		t_nUsed = 14;
	}
	else if (p_nNum == 13)
	{
		cout << "Thirteen";
		t_nUsed = 13;
	}
	else if (p_nNum == 12)
	{
		cout << "Twelve";
		t_nUsed = 12;
	}
	else if (p_nNum == 11)
	{
		cout << "Eleven";
		t_nUsed = 11;
	}
	else if (p_nNum == 10)
	{
		cout << "Ten";
		t_nUsed = 10;
	}
	else if (p_nNum == 9)
	{
		cout << "Nine";
		t_nUsed = 9;
	}
	else if (p_nNum == 8)
	{
		cout << "Eight";
		t_nUsed = 8;
	}
	else if (p_nNum == 7)
	{
		cout << "Seven";
		t_nUsed = 7;
	}
	else if (p_nNum == 6)
	{
		cout << "Six";
		t_nUsed = 6;
	}
	else if (p_nNum == 5)
	{
		cout << "Five";
		t_nUsed = 5;
	}
	else if (p_nNum == 4)
	{
		cout << "Four";
		t_nUsed = 4;
	}
	else if (p_nNum == 3)
	{
		cout << "Three";
		t_nUsed = 3;
	}
	else if (p_nNum == 2)
	{
		cout << "Two";
		t_nUsed = 2;
	}
	else if (p_nNum == 1)
	{
		cout << "One";
		t_nUsed = 1;
	}
	else if (p_nNum == 0)
	{
		cout << "Zero";
	}

	p_nNum -= t_nUsed;

	if (p_nNum > 0)
	{
		vPrintNumber(p_nNum);
	}
}

#if _EDITOR

int C52::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		if (t_strInput.empty())
		{
			continue;
		}

		int t_nNum = atoi(t_strInput.c_str());

		vPrintNumber(t_nNum);

		cout << "Dollar" << endl;
	}

	t_file.close();

	return 0;
}
