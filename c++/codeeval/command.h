#ifndef _COMMAND_H_
#define _COMMAND_H_

#include <string>
#include <vector>
using namespace std;

class CCommand
{
public:
	CCommand() {};
	CCommand(string p_strCmd)
		: m_strCmd(p_strCmd)
	{
	}

	virtual ~CCommand() {};

	virtual void vRun(const vector<string> &p_aArgs) = 0;

	string strCmd() const { return m_strCmd; };

	string strHelp() const { return ""; };

protected:
	string m_strCmd;
};

#endif
