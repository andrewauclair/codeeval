#ifndef _PROBLEM_H_
#define _PROBLEM_H_

#include <string>
using namespace std;

enum EDifficulty
{
	eDiff_None = -1,
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

	virtual ~CProblem() {};

	bool fInputRequired() const { return m_fInputRequired; };

	virtual int nRun(int argc, const char * argv[]) = 0;

protected:

	bool m_fInputRequired;
};

#endif
