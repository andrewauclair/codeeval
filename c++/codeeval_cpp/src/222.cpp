#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#if _EDITOR

#include "222cpp.h"

int CP222::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	
	string t_strInput;
	string t_strTemp;
	vector<string> t_aStrPeople = vector<string>();

	while (getline(t_file, t_strInput))
	{
		string t_strPeople;
		unsigned int t_cSkip;

		istringstream line(t_strInput);

		getline(line, t_strPeople, '|');
		getline(line, t_strTemp, '|');

		t_strPeople = t_strPeople.substr(0, t_strPeople.size() - 1);
		t_cSkip = atoi(t_strTemp.c_str());
		
		istringstream line2(t_strPeople);

		while (getline(line2, t_strTemp, ' '))
		{
			t_aStrPeople.push_back(t_strTemp);
		}

		// remove people
		while (t_aStrPeople.size() > 1)
		{
			if (t_aStrPeople.size() >= t_cSkip)
			{
				t_aStrPeople.erase(t_aStrPeople.begin() + t_cSkip - 1);
			}
			else
			{
				t_aStrPeople.erase(t_aStrPeople.begin() + ((t_cSkip - 1) % t_aStrPeople.size()));
			}
			//t_aStrPeople.erase(t_aStrPeople.begin() + (t_cSkip % t_aStrPeople.size()));
		}

		cout << t_aStrPeople[0] << endl;

		t_aStrPeople.clear();
	}

	t_file.close();

	return 0;
}
