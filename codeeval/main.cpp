#include <iostream>
#include <assert.h>
#include "problems.h"
using namespace std;

int main()
{
	cout << "<code_eval> c++ solutions" << endl;

	// entered, solved, unsolved, total
	// easy, moderate, hard

	int t_nInput = 0;

	while (t_nInput != -1)
	{
		string t_strInput;

		cout << "Problem: ";
		
		cin >> t_nInput;

		cout << endl;
		assert(t_nInput < sizeof(g_apProblems));
		g_apProblems[t_nInput - 1]->vRun();
		cout << endl;
	}

	cin.get();
}
