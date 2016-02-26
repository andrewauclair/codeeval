#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

#if _EDITOR

#include "235cpp.h"

int CP235::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		istringstream line(t_strInput);

		string t_strTrumpCard;
		string t_strCards;

		string t_strCard1;
		string t_strCard2;

		char t_chSuit1;
		char t_chSuit2;

		getline(line, t_strCards, '|');
		getline(line, t_strTrumpCard, '|');

		t_strTrumpCard = t_strTrumpCard.substr(1);
		t_strCards = t_strCards.substr(0, t_strCards.length() - 1);

		istringstream line2(t_strCards);

		getline(line2, t_strCard1, ' ');
		getline(line2, t_strCard2, ' ');

		t_chSuit1 = t_strCard1[t_strCard1.length() - 1];
		t_chSuit2 = t_strCard2[t_strCard2.length() - 1];

		t_strCard1 = t_strCard1.substr(0, t_strCard1.length() - 1);
		t_strCard2 = t_strCard2.substr(0, t_strCard2.length() - 1);

		int t_nCard1 = 0;
		int t_nCard2 = 0;

		switch (t_strCard1[0])
		{
		case 'A': t_nCard1 = 14; break;
		case '2': t_nCard1 = 2; break;
		case '3': t_nCard1 = 3; break;
		case '4': t_nCard1 = 4; break;
		case '5': t_nCard1 = 5; break;
		case '6': t_nCard1 = 6; break;
		case '7': t_nCard1 = 7; break;
		case '8': t_nCard1 = 8; break;
		case '9': t_nCard1 = 9; break;
		case '1': t_nCard1 = 10; break;
		case 'J': t_nCard1 = 11; break;
		case 'Q': t_nCard1 = 12; break;
		case 'K': t_nCard1 = 13; break;
		}

		switch (t_strCard2[0])
		{
		case 'A': t_nCard2 = 14; break;
		case '2': t_nCard2 = 2; break;
		case '3': t_nCard2 = 3; break;
		case '4': t_nCard2 = 4; break;
		case '5': t_nCard2 = 5; break;
		case '6': t_nCard2 = 6; break;
		case '7': t_nCard2 = 7; break;
		case '8': t_nCard2 = 8; break;
		case '9': t_nCard2 = 9; break;
		case '1': t_nCard2 = 10; break;
		case 'J': t_nCard2 = 11; break;
		case 'Q': t_nCard2 = 12; break;
		case 'K': t_nCard2 = 13; break;
		}

		bool t_fCard1 = false;
		bool t_fCard2 = false;

		if (t_strTrumpCard[0] == t_chSuit1 && t_strTrumpCard[0] != t_chSuit2)
		{
			t_fCard1 = true;
		}
		else if (t_strTrumpCard[0] == t_chSuit2 && t_strTrumpCard[0] != t_chSuit1)
		{
			t_fCard2 = true;
		}
		else if (t_nCard1 > t_nCard2)
		{
			t_fCard1 = true;
		}
		else if (t_nCard2 > t_nCard1)
		{
			t_fCard2 = true;
		}
		else
		{
			t_fCard1 = true;
			t_fCard2 = true;
		}

		if (t_fCard1)
		{
			cout << t_strCard1 << t_chSuit1;
		}

		if (t_fCard2)
		{
			if (t_fCard1)
			{
				cout << " ";
			}
			cout << t_strCard2 << t_chSuit2;
		}

		cout << endl;
	}

	t_file.close();

	return 0;
}
