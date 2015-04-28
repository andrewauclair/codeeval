#ifndef _DONE_COMMAND_H_
#define _DONE_COMMAND_H_

#include "command.h"

class CDone : public CCommand
{
	typedef CCommand super;

public:
	CDone();

	virtual ~CDone();

	virtual void vRun(const vector<string> &p_aArgs);

protected:
};

#endif
