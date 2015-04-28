#ifndef _COMMANDS_H_
#define _COMMANDS_H_

#include "filecheck.h"
#include "done.h"
#include "outcheck.h"
#include "run.h"
#include "finishcheck.h"

static const int gsc_cCommands = 5;

static CCommand * g_apCommands[gsc_cCommands] =
{
	new CFileCheck(),
	new CDone(),
	new COutCheck(),
	new CRun(),
	new CFinishCheck(),
};

#endif
