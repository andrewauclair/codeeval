#include "finishcheck.h"
#include "globals.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

CFinishCheck::CFinishCheck()
	: super("finish_check")
{
}

CFinishCheck::~CFinishCheck()
{
}

void CFinishCheck::vRun(const vector<string> &p_aArgs)
{
	streambuf* t_coutStream = cout.rdbuf();
	ostringstream t_output;

	streamsize t_precision = cout.precision();
	streamsize t_fill = cout.fill();
	streamsize t_width = cout.width();

	// call run on all non-NULL problems
	/*for (int t_i = 0; t_i < fsc_Croblems; ++t_i)
	{
		if (g_apProblems[t_i] != NULL)
		{
			int t_nInput = 0;

			stringstream t_ss;
			t_ss << t_i + 1;

			string t_strPath = "in/" + t_ss.str() + "_in.txt";

			const char * t_argv[] = { "main", t_strPath.c_str() };

			cout.rdbuf(t_output.rdbuf());
			int t_nResult = g_apProblems[t_i]->nRun(2, t_argv);
			cout.rdbuf(t_coutStream);

			cout.precision(t_precision);
			cout.fill(t_fill);
			cout.width(t_width);

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

			string t_strOut = t_output.str();

			if (!g_apProblems[t_i]->fFinished() && g_outputConsole->fCompare(t_strOut, t_strCompare) && t_nResult != -1)
			{
				cout << t_ss.str() << " is correct but hasn't been marked finished." << endl;
			}

			t_output.str("");
		}
	}*/
}
