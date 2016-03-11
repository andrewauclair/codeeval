#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#if _EDITOR

#include "152cpp.h"

int C152::nRun(int argc, const char * argv[])
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

		if (t_nNum >= 0 && t_nNum <= 2)
		{
			cout << "Still in Mama's arms";
		}
		else if (t_nNum == 3 || t_nNum == 4)
		{
			cout << "Preschool Maniac";
		}
		else if (t_nNum >= 5 && t_nNum <= 11)
		{
			cout << "Elementary school";
		}
		else if (t_nNum >= 12 && t_nNum <= 14)
		{
			cout << "Middle school";
		}
		else if (t_nNum >= 15 && t_nNum <= 18)
		{
			cout << "High school";
		}
		else if (t_nNum >= 19 && t_nNum <= 22)
		{
			cout << "College";
		}
		else if (t_nNum >= 23 && t_nNum <= 65)
		{
			cout << "Working for the man";
		}
		else if (t_nNum >= 66 && t_nNum <= 100)
		{
			cout << "The Golden Years";
		}
		else
		{
			cout << "This program is for humans";
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
