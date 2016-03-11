#include "done.h"
#include "problems_c.h"
#include "globals.h"
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

CDone::CDone()
	: super("done")
{
}

CDone::~CDone()
{
}

void CDone::vRun(const vector<string> &p_aArgs)
{
	//int t_cEasy = 0;
	//int t_cMed = 0;
	//int t_cHard = 0;

	//g_outputConsole->vClear();

	//// call run on all non-NULL problems
	//for (int t_i = 0; t_i < fsc_Croblems; ++t_i)
	//{
	//	if (t_i + 1 < 10)
	//	{
	//		g_outputConsole->cout("  ");
	//	}
	//	else if (t_i + 1 < 100)
	//	{
	//		g_outputConsole->cout(" ");
	//	}

	//	stringstream t_ss;
	//	t_ss << t_i + 1;
	//	g_outputConsole->cout(t_ss.str());
	//	g_outputConsole->cout(":[");

	//	if (g_apProblems[t_i] != NULL)
	//	{
	//		if (g_apProblems[t_i]->fFinished())
	//		{
	//			g_outputConsole->cout("X");

	//			switch (g_apProblems[t_i]->eDifficulty())
	//			{
	//			case eDiff_Easy:
	//				{
	//					t_cEasy++;
	//				}break;

	//			case eDiff_Med:
	//				{
	//					t_cMed++;
	//				}break;

	//			case eDiff_Hard:
	//				{
	//					t_cHard++;
	//				}break;
	//			}
	//		}
	//		else
	//		{
	//			g_outputConsole->cout(" ");
	//		}
	//	}
	//	else
	//	{
	//		g_outputConsole->cout(" ");
	//	}

	//	g_outputConsole->cout("] ");
	//}

	//cout << "Easy: " << t_cEasy << "/" << fsc_cEasyProblems << endl;
	//cout << "Med:  " << t_cMed << "/" << fsc_cModerateProblems << endl;
	//cout << "Hard: " << t_cHard << "/" << fsc_cHardProblems << endl;
}
