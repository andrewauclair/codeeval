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
			vWriteProblemInput(t_nProblem);

			cout.rdbuf(t_output.rdbuf());
			g_apProblems[t_nProblem - 1]->vRun();
			cout.rdbuf(t_coutStream);
			
			stringstream t_ss;
			t_ss << t_nProblem;
		
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

void CRun::vWriteProblemInput(int p_nProblem)
{
	// read in the input file for this problem and send it to the input console window
	fstream t_file;
	stringstream t_ss;
	t_ss << p_nProblem;

	string t_strFile = t_ss.str() + ".txt";
			
	t_file.open(t_strFile.c_str(), ios::in);

	string t_str;

	if (t_file.is_open())
	{
		while (getline(t_file, t_str))
		{
			g_inputConsole->cout(t_str + "\n");
		}
	}
	else
	{
		g_inputConsole->cout("This problem has no input.");
	}

	t_ss.str("");
	t_file.close();
}
