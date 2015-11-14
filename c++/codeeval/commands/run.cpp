#include "run.h"
#include "problems.h"
#include "globals.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <assert.h>
using namespace std;

CRun::CRun()
	: super("run")
{
}

CRun::~CRun()
{
}

void CRun::vRun(const vector<string> &p_aArgs)
{
	streambuf* t_coutStream = cout.rdbuf();
	ostringstream t_output;

	if (p_aArgs.size() >= 2)
	{
		int t_nProblem = atoi(p_aArgs[1].c_str());

		// clear the consoles
		g_inputConsole->vClear();
		g_outputConsole->vClear();

		if (t_nProblem >= 1 && t_nProblem < fsc_cProblems + 1 && g_apProblems[t_nProblem - 1] != NULL)
		{
			stringstream t_ss;
			t_ss << t_nProblem;

			// figure out the input file path and create an argv array
			string t_strPath = "in/" + t_ss.str() + "_in.txt";

			// display the input for this problem in the input console
			vWriteFileToConsole(t_strPath, g_inputConsole);

			const char * t_argv[] = { "main", t_strPath.c_str() };

			// redirect cout so we can print it later and run the problem code
			cout.rdbuf(t_output.rdbuf());
			g_apProblems[t_nProblem - 1]->nRun(2, t_argv);
			cout.rdbuf(t_coutStream);
			
			ifstream t_file("out/" + t_ss.str() + "_out.txt");
			string t_strCompare = "";
			
			if (t_file.is_open())
			{
				t_file.seekg(0, ios::end);
				t_strCompare.reserve(t_file.tellg());
				t_file.seekg(0, ios::beg);

				t_strCompare.assign((istreambuf_iterator<char>(t_file)),
										istreambuf_iterator<char>());
			}

			g_outputConsole->fCompare(t_output.str(), t_strCompare);
			t_output.str("");
		}
		else if (t_nProblem <= 0 || t_nProblem > fsc_cProblems)
		{
			cout << "The input was out of range, problem range is 1 to " << fsc_cProblems << endl;
		}
		else if (g_apProblems[t_nProblem - 1] == NULL)
		{
			cout << "This problem hasn't been added yet." << endl;
		}
	}
}

void CRun::vWriteFileToConsole(string p_strFile, CConsole* p_console)
{
	// read in the input file for this problem and send it to the input console window
	fstream t_file;
	string t_str;

	t_file.open(p_strFile.c_str(), ios::in);

	if (t_file.is_open())
	{
		while (getline(t_file, t_str))
		{
			p_console->cout(t_str + "\n");
		}
	}
	else
	{
		g_inputConsole->cout("This problem has no input.");
	}

	t_file.close();
}
