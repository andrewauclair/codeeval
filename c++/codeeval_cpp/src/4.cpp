#include <iostream>
#include <fstream>
using namespace std;

bool fPrime(int p_nNum)
{
	for (int t_i = 2; t_i < (p_nNum / 2) + 1; ++t_i)
	{
		if (p_nNum % t_i == 0)
		{
			return false;
		}
	}

	return true;
}

#if _EDITOR

#include "4cpp.h"

int CP4::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	int t_nNum = 2;
	int t_nPrimes = 0;
	int t_nTotal = 0;

	while (t_nPrimes < 1000)
	{
		if (fPrime(t_nNum))
		{
			t_nPrimes++;
			t_nTotal += t_nNum;
		}

		t_nNum++;
	}

	cout << t_nTotal;

	return 0;
}
