#include "outcheck.h"
#include "problems_c.h"
#include "globals.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

COutCheck::COutCheck()
	: super("out_check")
{
}

COutCheck::~COutCheck()
{
}

void COutCheck::vRun(const vector<string> &p_aArgs)
{
	//streambuf* t_coutStream = cout.rdbuf();
	//ostringstream t_output;

	//// call run on all non-NULL problems
	//for (int t_i = 0; t_i < fsc_Croblems; ++t_i)
	//{
	//	if (g_apProblems[t_i] != NULL)
	//	{
	//		int t_nInput = 0;

	//		stringstream t_ss;
	//		t_ss << t_i + 1;

	//		cout.rdbuf(t_output.rdbuf());
	//		g_apProblems[t_i]->vRun();
	//		cout.rdbuf(t_coutStream);

	//		ifstream t_file("out/" + t_ss.str() + "_out.txt");
	//		string t_strCompare = "";
	//		
	//		if (t_file.is_open())
	//		{
	//			t_file.seekg(0, ios::end);
	//			t_strCompare.reserve(t_file.tellg());
	//			t_file.seekg(0, ios::beg);

	//			t_strCompare.assign((istreambuf_iterator<char>(t_file)),
	//									istreambuf_iterator<char>());
	//		}

	//		string t_strOut = t_output.str();

	//		if (g_apProblems[t_i]->fFinished() && !g_outputConsole->fCompare(t_strOut, t_strCompare))
	//		{
	//			cout << t_ss.str() << " is incorrect but claimed finished." << endl;
	//		}

	//		t_output.str("");
	//	}
	//}
}
