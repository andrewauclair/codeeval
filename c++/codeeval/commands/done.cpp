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

	// call run on all non-NULL problems
	for (int t_i = 0; t_i < fsc_cProblems; ++t_i)
	{
		if (g_apProblems[t_i] != NULL)
		{
			if (g_apProblems[t_i]->fFinished())
			{
				switch (g_apProblems[t_i]->eDifficulty())
				{
				case eDiff_Easy:
					{
						t_cEasy++;
					}break;

				case eDiff_Med:
					{
						t_cMed++;
					}break;

				case eDiff_Hard:
					{
						t_cHard++;
					}break;
				}
			}
		}
	}

	cout << "Easy: " << t_cEasy << "/" << fsc_cEasyProblems << endl;
	cout << "Med:  " << t_cMed << "/" << fsc_cModerateProblems << endl;
	cout << "Hard: " << t_cHard << "/" << fsc_cHardProblems << endl;
}
