#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#if _EDITOR

#include "79cpp.h"

void C79::vPrintPos(int p_nPos)
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

int C79::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

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

		for (unsigned int t_i = 0; t_i < m_aryPositions.size(); ++t_i)
		{
			vPrintPos(t_i);
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
