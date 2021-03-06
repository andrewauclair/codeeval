#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#if _EDITOR

#include "174cpp.h"

int C174::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	string t_aSlang[8] =
	{
		", yeah!",
		", this is crazy, I tell ya.",
		", can U believe this?",
		", eh?",
		", aw yea.",
		", yo.",
		"? No way!",
		". Awesome!"
	};

	
	int t_Cunc = 0;
	int t_cSlang = 0;

	while (getline(t_file, t_strInput))
	{
		bool t_fIgnore = false;

		for (unsigned int t_i = 0; t_i < t_strInput.length(); ++t_i)
		{
			if ((t_strInput[t_i] == '.' || t_strInput[t_i] == '!' || t_strInput[t_i] == '?') && !t_fIgnore)
			{
				t_Cunc++;

				// insert some slang
				if (t_Cunc % 2 == 0)
				{
					t_strInput.erase(t_i, 1);
					t_strInput.insert(t_i, t_aSlang[t_cSlang]);
					t_i += t_aSlang[t_cSlang].length();
					t_cSlang++;
					if (t_cSlang > 7) t_cSlang = 0;
					
				}
			}
			t_fIgnore = false;
		}

		cout << t_strInput << endl;
	}

	t_file.close();

	return 0;
}
