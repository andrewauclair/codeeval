#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "63cpp.h"

bool C63::isPrime(long int p_nNum)
#else
bool isPrime(long int p_nNum)
#endif
{
	for (int t_i = 2; t_i < (p_nNum / 2) + 1; ++t_i)
	{
		if (p_nNum % t_i == 0 && p_nNum != t_i)
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR

int C63::nRun(int argc, const char * argv[])
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

		getline(line, t_str, ',');
		int t_nN = atoi(t_str.c_str());

		getline(line, t_str, ',');
		int t_nM = atoi(t_str.c_str());

		int t_nPrimes = 0;

		for (int t_i = t_nN; t_i <= t_nM; ++t_i)
		{
			if (isPrime(t_i))
			{
				t_nPrimes++;
			}
		}

		cout << t_nPrimes << endl;
	}

	t_file.close();

	return 0;
}
