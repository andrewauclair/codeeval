#ifndef _RUN_COMMAND_H
#define _RUN_COMMAND_H_

#include "command.h"

class CRun : public CCommand
{
	typedef CCommand super;

public:
	CRun();

	virtual ~CRun();

	virtual void vRun(const vector<string> &p_aArgs);

protected:

	void vWriteProblemInput(int p_nProblem);
};

#endif
