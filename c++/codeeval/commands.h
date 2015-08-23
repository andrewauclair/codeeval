#ifndef _COMMANDS_H_
#define _COMMANDS_H_

#include "filecheck.h"
#include "done.h"
#include "outcheck.h"
#include "run.h"
#include "finishcheck.h"
#include "help.h"
#include "clear.h"

static const int gsc_cCommands = 7;

static CCommand * g_apCommands[gsc_cCommands] =
{
	new CFileCheck(),
	new CDone(),
	new COutCheck(),
	new CRun(),
	new CFinishCheck(),
	new CHelp(),
	new CClear(),
};

#endif
