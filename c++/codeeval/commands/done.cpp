#include "done.h"
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
	// run -a
	// run all
	bool t_fAll = p_aArgs.size() > 0 && (p_aArgs[0].compare("all") || p_aArgs[0].compare("-a"));
	
	string t_strLang = "";

	if (p_aArgs.size() > 0)
	{
		t_strLang = p_aArgs[0];
	}

	// check if the language exists
	// check if t_fAll == true or t_strLang != ""

	// done will have 2 modes now
	// mode 1 shows done with a single language
	// mode 2 shows counts of how many languages a problem has been solved in

	// for c and c++ we can just use g_afProblemsSolved_c and g_afProblemsSolved
	// but for other languages we have to call out to an exe or script
	// so for these other languages we will send them a list of the problems we want and they'll
	// print out a list of the true or false and we'll read those here like we do in run

	int t_cEasy = 0;
	int t_cMed = 0;
	int t_cHard = 0;

	g_outputConsole->vClear();
	g_outputConsole->cout("Problem Progress\n\n");

	// --------------------------------------------------------------------------------
	// 200:[X] 200:[X] 200:[X] 200:[X] 200:[X] 200:[X] 200:[X] 200:[X] 200:[X] 200:[X] 
	// 200:[XX] 200:[XX] 200:[XX] 200:[XX] 200:[XX] 200:[XX] 200:[XX] 200:[XX] 200:[XX]
	// --------------------------------------------------------------------------------
	int t_i = 0;
	//for (int t_i = 0; t_i <= eDiff_Hard; ++t_i)
	{
		//EDifficulty t_eDiff = (EDifficulty)t_i;

		//for (int t_j = 0; t_j < fsc_Croblems; ++t_j)
		{
			//if (g_apProblems[t_j] == NULL || g_apProblems[t_j]->eDifficulty() != t_eDiff) continue;

			/*if (g_apProblems[t_j]->fFinished())
			{
				switch (g_apProblems[t_j]->eDifficulty())
				{
				case eDiff_Easy:
				{
					++t_cEasy;
				}break;

				case eDiff_Moderate:
				{
					++t_cMed;
				}break;

				case eDiff_Hard:
				{
					++t_cHard;
				}break;
				}
			}*/
		}
	}

	/*for (int t_i = 0; t_i <= eDiff_Hard; ++t_i)
	{
		EDifficulty t_eDiff = (EDifficulty)t_i;

		switch (t_eDiff)
		{
		case eDiff_Easy:
			{
				stringstream ss;
				ss << t_cEasy << " / " << fsc_cEasyProblems;
				g_outputConsole->cout("\n\nEasy Problems [ " + ss.str());
				g_outputConsole->cout(" ]\n\n");
			}break;

		case eDiff_Moderate:
			{
				stringstream ss;
				ss << t_cMed << " / " << fsc_cModerateProblems;
				g_outputConsole->cout("\n\nModerate Problems [ " + ss.str());
				g_outputConsole->cout(" ]\n\n");
			}break;

		case eDiff_Hard:
			{
				stringstream ss;
				ss << t_cHard << " / " << fsc_cHardProblems;
				g_outputConsole->cout("\n\nHard Problems [ " + ss.str());
				g_outputConsole->cout(" ]\n\n");
			}break;
		}

		for (int t_j = 0; t_j < fsc_Croblems; ++t_j)
		{
			if (g_apProblems[t_j] == NULL || g_apProblems[t_j]->eDifficulty() != t_eDiff) continue;

			if (t_j + 1 < 10)
			{
				g_outputConsole->cout("  ");
			}
			else if (t_j + 1 < 100)
			{
				g_outputConsole->cout(" ");
			}

			stringstream t_ss;
			t_ss << t_j + 1;
			g_outputConsole->cout(t_ss.str());
			g_outputConsole->cout(":[");

			if (g_apProblems[t_j]->fFinished())
			{
				g_outputConsole->cout("X");
			}
			else
			{
				g_outputConsole->cout(" ");
			}

			g_outputConsole->cout("] ");
		}
	}

	g_outputConsole->cout("\n\nProblems With No Source Code\n\n");

	for (int t_j = 0; t_j < fsc_Croblems; ++t_j)
	{
		if (g_apProblems[t_j] != NULL) continue;

		if (t_j + 1 < 10)
		{
			g_outputConsole->cout("  ");
		}
		else if (t_j + 1 < 100)
		{
			g_outputConsole->cout(" ");
		}

		stringstream t_ss;
		t_ss << t_j + 1;
		g_outputConsole->cout(t_ss.str());
		g_outputConsole->cout(":[!] ");
	}*/
}
