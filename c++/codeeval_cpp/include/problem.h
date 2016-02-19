#ifndef _PROBLEM_H_
#define _PROBLEM_H_

#include <string>
using namespace std;

enum EDifficulty
{
	eDiff_Easy = 0,
	eDiff_Moderate,
	eDiff_Hard
};

class CProblemInfo
{
public:
	CProblemInfo() {};
	CProblemInfo(string p_strName, string p_strURL, int p_nNumber, EDifficulty p_eDifficulty)
		:	m_strName(p_strName),
			m_strURL(p_strURL),
			m_nNumber(p_nNumber),
			m_eDifficulty(p_eDifficulty)
	{

	}

private:

	string m_strName;
	string m_strURL;
	int m_nNumber;

	EDifficulty m_eDifficulty;
};

class CProblem
{
public:
	CProblem() {};
	CProblem(string p_strName, string p_strURL, int p_nNumber, bool p_fFinished, EDifficulty p_eDifficulty) 
		: m_strName(p_strName), 
		  m_strURL(p_strURL), 
		  m_nNumber(p_nNumber),
		  m_fFinished(p_fFinished),
		  m_fInputRequired(true),
		  m_eDifficulty(p_eDifficulty)
	{}

	virtual ~CProblem() {};

	bool fFinished() const { return m_fFinished; };
	bool fInputRequired() const { return m_fInputRequired; };

	virtual int nRun(int argc, const char * argv[]) = 0;

protected:

	string m_strName;
	string m_strURL;
	int m_nNumber;

	bool m_fFinished;
	bool m_fInputRequired;

	EDifficulty m_eDifficulty;
};

#endif
