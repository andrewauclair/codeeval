#ifndef _PROBLEM_H_
#define _PROBLEM_H_

#include <string>
using namespace std;

enum EDifficulty
{
	eDiff_Easy = 0,
	eDiff_Med,
	eDiff_Hard,

	eDiff_Max,
	eDiff_Nil = -1
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
		  m_eDifficulty(p_eDifficulty)
	{}

	virtual ~CProblem() {};

	string strName() const { return m_strName; };
	string strURL() const { return m_strURL; };

	int nNumber() const { return m_nNumber; };

	bool fFinished() const { return m_fFinished; };
	EDifficulty eDifficulty() const { return m_eDifficulty; };

	virtual void vRun() = 0;

protected:

	string m_strName;
	string m_strURL;
	int m_nNumber;

	bool m_fFinished;
	
	EDifficulty m_eDifficulty;
};

#endif
