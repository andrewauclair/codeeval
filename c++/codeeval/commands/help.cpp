#include "help.h"
#include "globals.h"
#include "commands.h"
#include <string>
using namespace std;

CHelp::CHelp()
	: super("help")
{
}

CHelp::~CHelp()
{
}

void CHelp::vRun(const vector<string> &p_aArgs)
{
	g_inputConsole->vClear();
	g_outputConsole->vClear();

	for (int t_i = 0; t_i < gsc_cCommands; ++t_i)
	{
		g_inputConsole->cout(g_apCommands[t_i]->strCmd());
		g_inputConsole->cout("\n");
	}
}
