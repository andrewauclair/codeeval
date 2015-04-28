#include "filecheck.h"
#include "problems.h"
#include "globals.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

CFileCheck::CFileCheck()
	: super("file_check")
{
}

CFileCheck::~CFileCheck()
{
}

void CFileCheck::vRun(const vector<string> &p_aArgs)
{
	streambuf* t_coutStream = cout.rdbuf();
	ostringstream t_output;

	// call run on all non-NULL problems
	for (int t_i = 0; t_i < fsc_cProblems; ++t_i)
	{
		if (g_apProblems[t_i] != NULL)
		{
			// check for input and output files
			stringstream t_ss;
			t_ss << t_i + 1;

			string t_strIn = "in/" + t_ss.str() + "_in.txt";
			string t_strOut = "out/" + t_ss.str() + "_out.txt";

			ifstream t_in(t_strIn.c_str());
			ifstream t_out(t_strOut.c_str());

			bool t_fIn = (t_in.is_open() && g_apProblems[t_i]->fInputRequired() || !g_apProblems[t_i]->fInputRequired());
			bool t_fOut = t_out.is_open();

			if (!t_fIn || !t_fOut)
			{
				cout << t_ss.str() << " : in( " << t_fIn << " ) : out ( " << t_fOut << " )" << endl;
			}

			cout.rdbuf(t_output.rdbuf());

			g_apProblems[t_i]->vRun();

			cout.rdbuf(t_coutStream);
		}
	}

	cout << "Done with checking problems for missing files." << endl;
}
