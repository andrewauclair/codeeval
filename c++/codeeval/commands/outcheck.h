#ifndef _OUT_CHECK_COMMAND_H_
#define _OUT_CHECK_COMMAND_H_

#include "command.h"

class COutCheck : public CCommand
{
	typedef CCommand super;

public:
	COutCheck();

	virtual ~COutCheck();

	virtual void vRun(const vector<string> &p_aArgs);

protected:
};

#endif
