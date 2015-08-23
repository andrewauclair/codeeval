#ifndef _FILE_CHECK_COMMAND_H_
#define _FILE_CHECK_COMMAND_H_

#include "command.h"

class CFileCheck : public CCommand
{
	typedef CCommand super;

public:
	CFileCheck();

	virtual ~CFileCheck();

	virtual void vRun(const vector<string> &p_aArgs);

protected:
};

#endif
