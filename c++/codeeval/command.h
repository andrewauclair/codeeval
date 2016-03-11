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

	string strSysCmd(const vector<string> &p_aArgs)
	{
		string p_strLanguage = p_aArgs[2];

		// setup the different system call for each language, some will be the same
		if (p_strLanguage.compare("c") == 0)
		{
			return "codeeval_c.exe " + p_aArgs[1];
		}
		else if (p_strLanguage.compare("cs") == 0)
		{
			return "codeeval_cs.exe " + p_aArgs[1];
		}
		else if (p_strLanguage.compare("Cp") == 0)
		{
			return "codeeval_Cp.exe " + p_aArgs[1];
		}
		else if (p_strLanguage.compare("py2") == 0 || p_strLanguage.compare("py3") == 0)
		{
			return "python py2/" + p_aArgs[1] + ".py";
		}
	}
	
protected:
	string m_strCmd;
};

#endif
