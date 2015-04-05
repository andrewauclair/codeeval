#include <iostream>
#include <assert.h>
#include <fstream>
#include <sstream>
#include <string>

#include "problems.h"

#include "consoleInput.h"
#include "consoleOutput.h"
#include "consolePerformance.h"

using namespace std;

int main()
{
	// create the consoles
	//CConsoleInput* t_inputConsole = new CConsoleInput();
	//CConsoleOutput* t_outputConsole = new CConsoleOutput();
	//CConsolePerformance* t_performanceConsole = new CConsolePerformance();

	// position the consoles
	//t_inputConsole->vSetPos(300, 0);

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

		// clear the consoles
		//t_inputConsole->vClear();

		if (g_apProblems[t_nInput - 1] != NULL)
		{
			// read in the input file for this problem and send it to the input console window
			fstream t_file;
			stringstream t_ss;
			t_ss << t_nInput;

			string t_strFile = t_ss.str() + ".txt";
			
			t_file.open(t_strFile.c_str(), ios::in);

			string t_str;

			while (getline(t_file, t_str))
			{
				//t_inputConsole->cout(t_str + "\n");
			}

			t_ss.str("");
			t_file.close();

			g_apProblems[t_nInput - 1]->vRun();
		}
		else
		{
			cout << "This problem hasn't been added yet.";
		}

		cout << endl;
	}

	cin.get();
}
