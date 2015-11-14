#include "done.h"
#include "problems.h"
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
	int t_cEasy = 0;
	int t_cMed = 0;
	int t_cHard = 0;

	g_outputConsole->vClear();
	g_outputConsole->cout("Problem Progress\n\n");

	for (int t_i = 0; t_i <= eDiff_Hard; ++t_i)
	{
		EDifficulty t_eDiff = (EDifficulty)t_i;

		switch (t_eDiff)
		{
		case eDiff_Easy:
			{
				g_outputConsole->cout("\n\nEasy Problems\n\n");
			}break;

		case eDiff_Moderate:
			{
				g_outputConsole->cout("\n\nModerate Problems\n\n");
			}break;

		case eDiff_Hard:
			{
				g_outputConsole->cout("\n\nHard Problems\n\n");
			}break;
		}

		for (int t_j = 0; t_j < fsc_cProblems; ++t_j)
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
			}
			else
			{
				g_outputConsole->cout(" ");
			}

			g_outputConsole->cout("] ");
		}
	}

	g_outputConsole->cout("\n\nProblems Not Started\n\n");

	for (int t_j = 0; t_j < fsc_cProblems; ++t_j)
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
	}

	cout << "Easy: " << t_cEasy << " / " << fsc_cEasyProblems << endl;
	cout << "Med:  " << t_cMed << " / " << fsc_cModerateProblems << endl;
	cout << "Hard: " << t_cHard << " / " << fsc_cHardProblems << endl;
}
