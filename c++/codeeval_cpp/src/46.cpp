#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "46cpp.h"

bool C46::isPrime(long int p_nNum)
#else
bool isPrime(long int p_nNum)
#endif
{
	for (long int t_i = 2; t_i < (p_nNum / 2) + 1; ++t_i)
	{
		if (p_nNum % t_i == 0 && p_nNum != t_i)
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR

int C46::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_str;
	long int t_nVal;

	while (getline(t_file, t_strInput))
	{
		t_nVal = atol(t_strInput.c_str());

		if (t_nVal >= 2)
		{
			cout << "2";
		}
		for (long int t_i = 3; t_i < t_nVal; ++t_i)
		{
			if (isPrime(t_i))
			{
				cout << "," << t_i;
			}
		}
		cout << endl;
	}

	t_file.close();

	return 0;
}
