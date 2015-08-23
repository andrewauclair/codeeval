#ifndef _HELP_COMMAND_H_
#define _HELP_COMMAND_H_

#include "command.h"

class CHelp : public CCommand
{
	typedef CCommand super;

public:
	CHelp();

	virtual ~CHelp();

	virtual void vRun(const vector<string> &p_aArgs);

protected:
};

#endif
