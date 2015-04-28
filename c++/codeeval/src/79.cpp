#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#if _EDITOR

#include "79.h"

void CP79::vPrintPos(int p_nPos)
#else
vector<char> m_aryPositions;
int m_nX;
int m_nY;

void vPrintPos(int p_nPos)
#endif
{
	int t_nX = p_nPos - ((p_nPos / m_nX) * m_nX);
	int t_nY = p_nPos / m_nX;

	if (m_aryPositions[p_nPos] == '*')
	{
		cout << "*";
		return;
	}

	int t_nBombs = 0;

	if (t_nX > 0)
	{
		if (m_aryPositions[(t_nY * m_nX) + t_nX - 1] == '*')
		{
			t_nBombs++;
		}
	}

	

	if (t_nX < m_nX - 1)
	{
		if (m_aryPositions[(t_nY * m_nX) + t_nX + 1] == '*')
		{
			t_nBombs++;
		}
	}

	if (t_nY > 0)
	{
		if (m_aryPositions[((t_nY - 1) * m_nX) + t_nX] == '*')
		{
			t_nBombs++;
		}
	}

	if (t_nY < m_nY - 1)
	{
		if (m_aryPositions[((t_nY + 1) * m_nX) + t_nX] == '*')
		{
			t_nBombs++;
		}
	}

	// corners

	if (t_nX > 0 && t_nY > 0)
	{
		if (m_aryPositions[((t_nY - 1) * m_nX) + t_nX - 1] == '*')
		{
			t_nBombs++;
		}
	}

	if (t_nX > 0 && t_nY < m_nY - 1)
	{
		if (m_aryPositions[((t_nY + 1) * m_nX) + t_nX - 1] == '*')
		{
			t_nBombs++;
		}
	}

	if (t_nX < m_nX - 1 && t_nY > 0)
	{
		if (m_aryPositions[((t_nY - 1) * m_nX) + t_nX + 1] == '*')
		{
			t_nBombs++;
		}
	}

	if (t_nX < m_nX - 1 && t_nY < m_nY - 1)
	{
		if (m_aryPositions[((t_nY + 1) * m_nX) + t_nX + 1] == '*')
		{
			t_nBombs++;
		}
	}

	cout << t_nBombs;
}

#if _EDITOR

static const char * fsc_pChzName = "Minesweeper";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/79/";
static const int fsc_nNumber = 79;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;

CP79::CP79()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP79::~CP79()
{
}

void CP79::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
	string t_strInput;

#if _EDITOR
	t_file.open("in/79_in.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	int t_nX;
	int t_nY;
	char t_junk;

	while (!t_file.eof())
	{
		t_file >> m_nY;
		t_file >> t_junk;
		t_file >> m_nX;
		t_file >> t_junk;

		m_aryPositions = vector<char>();

		for (int t_i = 0; t_i < m_nY * m_nX; ++t_i)
		{
			t_file >> t_junk;
			m_aryPositions.push_back(t_junk);
		}

		for (int t_i = 0; t_i < m_aryPositions.size(); ++t_i)
		{
			vPrintPos(t_i);
		}

		cout << endl;
	}

	t_file.close();

#if !_EDITOR
	return 0;
#endif
}
