#include "run.h"
#include "globals.h"
#include "problems_cpp.h"
#include "problems_c.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

CRun::CRun()
	: super("run")
{
}

CRun::~CRun()
{
}

// run <problem> <language>
void CRun::vRun(const vector<string> &p_aArgs)
{
	streambuf* t_coutStream = cout.rdbuf();
	ostringstream t_output;
	FILE * stream;

	if (p_aArgs.size() >= 2)
	{
		int t_nProblem = atoi(p_aArgs[1].c_str());

		// clear the consoles
		g_inputConsole->vClear();
		g_outputConsole->vClear();

		string t_strRun;
		string t_strLanguage = "cpp";

		if (p_aArgs.size() >= 3)
		{
			t_strLanguage = p_aArgs[2];
			t_strRun = strSysCmd(p_aArgs);
		}
		
		string t_strPath = "in/" + p_aArgs[1] + "_in.txt";

		//t_strRun += " " + p_aArgs[1];
		t_strRun += " " + t_strPath;

		cout.rdbuf(t_output.rdbuf());
		stream = freopen("stdout.txt", "w", stdout);

		if (t_strLanguage.compare("cpp") == 0)
		{
			const char * t_argv[] = { "main", t_strPath.c_str() };

			g_apProblems[atoi(p_aArgs[1].c_str()) - 1]->nRun(2, t_argv);
		}
		else if (t_strLanguage.compare("c") == 0)
		{
			const char * t_argv[] = { "main", t_strPath.c_str() };

			(*g_apProblems_c[atoi(p_aArgs[1].c_str()) - 1])(2, t_argv);
		}
		else// if (t_strLanguage.compare("cs") == 0)
		{
			// swap this for a popen setup
			//system(t_strRun.c_str());
			FILE* in;
			char buff[512];

			if (!(in = _popen(t_strRun.c_str(), "r")))
			{
			}

			while (fgets(buff, sizeof(buff), in) != NULL)
			{
				cout << buff;
			}
			_pclose(in);
		}

		stream = freopen("CON", "w", stdout);
		//system(t_strRun.c_str()); // apparently we should just use popen instead here and read from the pipe it gives us
		cout.rdbuf(t_coutStream);

		fstream t_file("stdout.txt", ios::in);
		string t_strInput;

		while (getline(t_file, t_strInput))
		{
			t_output << t_strInput << endl;
		}

		t_file.close();
		std::remove("stdout.txt");

		//if (t_nProblem >= 1 && t_nProblem < fsc_cProblems + 1 && g_apProblems[t_nProblem - 1] != NULL)
		{
			stringstream t_ss;
			t_ss << t_nProblem;

			// figure out the input file path and create an argv array

			// display the input for this problem in the input console
			vWriteFileToConsole(t_strPath, g_inputConsole);

			const char * t_argv[] = { "main", t_strPath.c_str() };

			// redirect cout so we can print it later and run the problem code
			//g_apProblems[t_nProblem - 1]->nRun(2, t_argv);
			
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
		//else if (t_nProblem <= 0 || t_nProblem > fsc_cProblems)
		{
			//cout << "The input was out of range, problem range is 1 to " << fsc_cProblems << endl;
		}
		//else if (g_apProblems[t_nProblem - 1] == NULL)
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
