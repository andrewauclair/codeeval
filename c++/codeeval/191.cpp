#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

vector<vector<bool>> m_aaLights = vector<vector<bool>>();
int m_nHeight = 0;
int m_nWidth = 0;

int cLightsOn()
{
	int t_cOn = 0;

	for (int t_i = 0; t_i < m_nHeight; ++t_i)
	{
		for (int t_j = 0; t_j < m_nWidth; ++t_j)
		{
			if (m_aaLights[t_i][t_j])
			{
				t_cOn++;
			}
		}
	}

	return t_cOn;
}

int cLightsOff()
{
	int t_cOff = 0;

	for (int t_i = 0; t_i < m_nHeight; ++t_i)
	{
		for (int t_j = 0; t_j < m_nWidth; ++t_j)
		{
			if (!m_aaLights[t_i][t_j])
			{
				t_cOff++;
			}
		}
	}

	return t_cOff;
}

int cLightsToTurnOff(int p_x, int p_y)
{
	int t_cOff = 0;

	if (p_y >= 0 && p_y < m_nHeight)
	{
		if (p_x - 1 >= 0)
		{
			t_cOff += !m_aaLights[p_y][p_x - 1] ? 0 : 1;
		}

		if (p_x + 1 < m_nWidth)
		{
			t_cOff += !m_aaLights[p_y][p_x + 1] ? 0 : 1;
		}
	}

	if (p_x >= 0 && p_x < m_nWidth && p_y >= 0 && p_y < m_nHeight)
	{
		if (p_y - 1 >= 0)
		{
			t_cOff += !m_aaLights[p_y - 1][p_x] ? 0 : 1;
		}

		if (p_y + 1 < m_nHeight)
		{
			t_cOff += !m_aaLights[p_y + 1][p_x] ? 0 : 1;
		}
	}

	if (p_x >= 0 && p_x < m_nWidth && p_y >= 0 && p_y < m_nHeight)
	{
		t_cOff += !m_aaLights[p_y][p_x] ? 0 : 1;
	}

	return t_cOff;
}

int cLightsToTurnOn(int p_x, int p_y)
{
	int t_cOn = 0;

	if (p_y >= 0 && p_y < m_nHeight)
	{
		if (p_x - 1 >= 0)
		{
			t_cOn += m_aaLights[p_y][p_x - 1] ? 0 : 1;
		}

		if (p_x + 1 < m_nWidth)
		{
			t_cOn += m_aaLights[p_y][p_x + 1] ? 0 : 1;
		}
	}

	if (p_x >= 0 && p_x < m_nWidth)
	{
		if (p_y - 1 >= 0)
		{
			t_cOn += m_aaLights[p_y - 1][p_x] ? 0 : 1;
		}

		if (p_y + 1 < m_nHeight)
		{
			t_cOn += m_aaLights[p_y + 1][p_x] ? 0 : 1;
		}
	}

	if (p_x >= 0 && p_x < m_nWidth && p_y >= 0 && p_y < m_nHeight)
	{
		t_cOn += m_aaLights[p_y][p_x] ? 0 : 1;
	}

	return t_cOn;
}

int cLightsOnAdj(int p_x, int p_y)
{
	int t_cOn = 0;

	t_cOn += cLightsToTurnOn(p_x - 1, p_y);
	t_cOn += cLightsToTurnOn(p_x + 1, p_y);

	t_cOn += cLightsToTurnOn(p_x, p_y - 1);
	t_cOn += cLightsToTurnOn(p_x, p_y + 1);

	return t_cOn;
}

int cLightsOffAdj(int p_x, int p_y)
{
	int t_cOff = 0;

	t_cOff += cLightsToTurnOff(p_x - 1, p_y);
	t_cOff += cLightsToTurnOff(p_x + 1, p_y);

	t_cOff += cLightsToTurnOff(p_x, p_y - 1);
	t_cOff += cLightsToTurnOff(p_x, p_y + 1);

	return t_cOff;
}

#if _EDITOR
#include "191.h"
static const char * fsc_pChzName = "Lights Out";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/191/";
static const int fsc_nNumber = 191;
static const bool fsc_fFinished = false;
static const EDifficulty fsc_eDifficulty = eDiff_Hard;
CP191::CP191()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}
CP191::~CP191()
{
}
void CP191::vRun()
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file;
#if _EDITOR
	t_file.open("191.txt", ios::in);
#else
	t_file.open(argv[1], ios::in);
#endif

	// for now we'll get input of a grid layout and dump out some data for it
	// .OO|OOO|OOO

	string t_strInput = "";

	do
	{
		cout << "height: ";
		cin >> m_nHeight;
		cout << "width: ";
		cin >> m_nWidth;
		cin.ignore();

		for (int t_i = 0; t_i < m_nHeight; ++t_i)
		{
			m_aaLights.push_back(vector<bool>());

			for (int t_j = 0; t_j < m_nWidth; ++t_j)
			{
				m_aaLights[t_i].push_back(false);
			}
		}

		getline(cin, t_strInput);
		
		istringstream line(t_strInput);
		string t_str;
		int t_nLine = 0;

		while (getline(line, t_str, '|'))
		{
			for (int t_i = 0; t_i < t_str.length(); ++t_i)
			{
				if (t_str[t_i] == '.')
				{
					m_aaLights[t_nLine][t_i] = false;
				}
				else
				{
					m_aaLights[t_nLine][t_i] = true;
				}
			}
			t_nLine++;
		}

		// dump out the current grid
		for (int t_i = 0; t_i < m_nHeight; ++t_i)
		{
			for (int t_j = 0; t_j < m_nWidth; ++t_j)
			{
				if (m_aaLights[t_i][t_j])
				{
					cout << "O";
				}
				else
				{
					cout << ".";
				}
			}
			cout << endl;
		}

		cout << endl << "# turned on" << endl;

		// what do we want to calc first?
		// lights that will be turned on
		for (int t_i = 0; t_i < m_nHeight; ++t_i)
		{
			for (int t_j = 0; t_j < m_nWidth; ++t_j)
			{
				cout << "(" << cLightsToTurnOn(t_j, t_i) << "," << cLightsOnAdj(t_j, t_i) << ") ";
			}
			cout << endl;
		}

		cout << endl << "# turned off " << endl;

		// lights that will be turned off
		for (int t_i = 0; t_i < m_nHeight; ++t_i)
		{
			for (int t_j = 0; t_j < m_nWidth; ++t_j)
			{
				cout << "(" << cLightsToTurnOff(t_j, t_i) << "," << cLightsOffAdj(t_j, t_i) << ") ";
			}
			cout << endl;
		}
		// total lights involved, pretty simple, do we need that?
		cin.get();
	} while (t_strInput.compare("-1") != 0);
}
