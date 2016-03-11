#include "filecheck.h"
#include "globals.h"
#include "problems_cpp.h"
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
	for (int t_i = 0; t_i < fsc_Croblems; ++t_i)
	{
		stringstream t_ss;
		t_ss << t_i + 1;

		string t_strIn = "in/" + t_ss.str() + "_in.txt";
		string t_strOut = "out/" + t_ss.str() + "_out.txt";

		ifstream t_in(t_strIn.c_str());
		ifstream t_out(t_strOut.c_str());

		if (!t_in.is_open() || !t_out.is_open())
		{
			cout << t_ss.str() << " : in( " << t_in.is_open() << " ) : out ( " << t_out.is_open() << " )" << endl;
		}
	//	if (g_apProblems[t_i] != NULL)
	//	{
	//		// check for input and output files
	//		stringstream t_ss;
	//		t_ss << t_i + 1;

	//		string t_strIn = "in/" + t_ss.str() + "_in.txt";
	//		string t_strOut = "out/" + t_ss.str() + "_out.txt";

	//		ifstream t_in(t_strIn.c_str());
	//		ifstream t_out(t_strOut.c_str());

	//		bool t_fIn = (t_in.is_open() && g_apProblems[t_i]->fInputRequired() || !g_apProblems[t_i]->fInputRequired());
	//		bool t_fOut = t_out.is_open();

	//		if (!t_fIn || !t_fOut)
	//		{
	//			cout << t_ss.str() << " : in( " << t_fIn << " ) : out ( " << t_fOut << " )" << endl;
	//		}

	//		string t_strPath = "in/" + t_ss.str() + "_in.txt";

	//		const char * t_argv[] = { "main", t_strPath.c_str() };

	//		cout.rdbuf(t_output.rdbuf());
	//		g_apProblems[t_i]->nRun(2, t_argv);
	//		cout.rdbuf(t_coutStream);
	//	}
	}

	cout << "Done with checking problems for missing files." << endl;
}
