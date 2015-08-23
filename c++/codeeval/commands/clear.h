#ifndef _RUN_COMMAND_H
#define _RUN_COMMAND_H_

#include "command.h"

class CClear : public CCommand
{
	typedef CCommand super;

public:
	CClear();

	virtual ~CClear();

	virtual void vRun(const vector<string> &p_aArgs);

protected:
};

#endif
