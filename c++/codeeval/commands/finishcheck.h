#ifndef _FINISH_CHECK_COMMAND_H_
#define _FINISH_CHECK_COMMAND_H_

#include "command.h"

class CFinishCheck : public CCommand
{
	typedef CCommand super;

public:
	CFinishCheck();

	virtual ~CFinishCheck();

	virtual void vRun(const vector<string> &p_aArgs);

protected:
};

#endif
