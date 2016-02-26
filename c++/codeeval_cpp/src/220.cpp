#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

#if _EDITOR

#include "220cpp.h"

int CP220::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		int t_cVampires = 0;
		int t_cZombies = 0;
		int t_cWitches = 0;
		int t_cHouses = 0;

		t_strInput = t_strInput.substr(10);
		t_cVampires = atoi(t_strInput.substr(0, t_strInput.find(",")).c_str());
		t_strInput = t_strInput.substr(t_strInput.find(",") + 11);
		t_cZombies = atoi(t_strInput.substr(0, t_strInput.find(",")).c_str());
		t_strInput = t_strInput.substr(t_strInput.find(",") + 11);
		t_cWitches = atoi(t_strInput.substr(0, t_strInput.find(",")).c_str());
		t_strInput = t_strInput.substr(t_strInput.find(",") + 10);
		t_cHouses = atoi(t_strInput.c_str());

		int t_cAverage = (int)floor((((t_cVampires * 3) + (t_cZombies * 4) + (t_cWitches * 5)) * t_cHouses) / (double)(t_cVampires + t_cZombies + t_cWitches));
		cout << t_cAverage << endl;
	}

	t_file.close();

	return 0;
}
