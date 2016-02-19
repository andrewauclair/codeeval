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

	string strSysCmd(string p_strLanguage)
	{
		// setup the different system call for each language, some will be the same
		if (p_strLanguage.compare("c") == 0)
		{
			return "codeeval_c.exe";
		}
		else if (p_strLanguage.compare("cs") == 0)
		{
			return "codeeval_cs.exe";
		}
		else if (p_strLanguage.compare("cpp") == 0)
		{
			return "codeeval_cpp.exe";
		}
	}
	
protected:
	string m_strCmd;
};

#endif
