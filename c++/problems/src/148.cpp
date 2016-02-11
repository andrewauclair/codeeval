#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <cstdlib>
using namespace std;

#if _EDITOR
#include "148.h"

float CP148::hue2rgb(float p, float q, float t)
#else
float hue2rgb(float p, float q, float t)
#endif
{
	if (t < 0) t += 1;
	if (t > 1) t -= 1;
	if (t < 1/6.0f) return p + (q - p) * 6 * t;
	if (t < 1/2.0f) return q;
	if (t < 2/3.0f) return p + (q - p) * (2/3.0f - t) * 6;
	return p;
}

#if _EDITOR

static const char * fsc_pChzName = "Color Code Converter";
static const char * fsc_pChzURL = "https://www.codeeval.com/open_challenges/148/";
static const int fsc_nNumber = 148;
static const bool fsc_fFinished = true;
static const EDifficulty fsc_eDifficulty = eDiff_Moderate;

CP148::CP148()
	: super(string(fsc_pChzName), string(fsc_pChzURL), fsc_nNumber, fsc_fFinished, fsc_eDifficulty)
{
}

CP148::~CP148()
{
}

int CP148::nRun(int argc, const char * argv[])
#else
int main(int argc, char* argv[])
#endif
{
	fstream t_file(argv[1], ios::in);
	string t_strInput;

	while (getline(t_file, t_strInput))
	{
		string t_str;

		if (t_strInput[0] == '(')
		{
			t_strInput = t_strInput.substr(1, t_strInput.length() - 2);
			istringstream line(t_strInput);

			getline(line, t_str, ',');
			double t_rC = atof(t_str.c_str());
			getline(line, t_str, ',');
			double t_rM = atof(t_str.c_str());
			getline(line, t_str, ',');
			double t_rY = atof(t_str.c_str());
			getline(line, t_str, ',');
			double t_rK = atof(t_str.c_str());

			int t_nC = t_rC * 100;
			int t_nM = t_rM * 100;
			int t_nY = t_rY * 100;
			int t_nK = t_rK * 100;
			
			int t_r = (int)floor(255 * ((100 - t_nC) / 100.0f) * ((100 - t_nK) / 100.0f) + 0.5);
			int t_g = (int)floor(255 * ((100 - t_nM) / 100.0f) * ((100 - t_nK) / 100.0f) + 0.5);
			int t_b = (int)floor(255 * ((100 - t_nY) / 100.0f) * ((100 - t_nK) / 100.0f) + 0.5);

			cout << "RGB(" << t_r << "," << t_g << "," << t_b << ")" << endl;
		}
		else if (t_strInput[0] == '#')
		{
			t_strInput = t_strInput.substr(1, t_strInput.length() - 1);
			
			int t_r = 0;
			int t_g = 0;
			int t_b = 0;

			stringstream t_ss_r;
			t_ss_r << std::hex << t_strInput.substr(0, 2);
			t_ss_r >> t_r;

			stringstream t_ss_g;
			t_ss_g << std::hex << t_strInput.substr(2, 2);
			t_ss_g >> t_g;

			stringstream t_ss_b;
			t_ss_b << std::hex << t_strInput.substr(4, 2);
			t_ss_b >> t_b;

			cout << "RGB(" << t_r << "," << t_g << "," << t_b << ")" << endl;
		}
		else if (t_strInput.substr(0, 3).compare("HSL") == 0)
		{
			t_strInput = t_strInput.substr(4, t_strInput.length() - 5);
			istringstream line(t_strInput);

			getline(line, t_str, ',');
			float t_h = atoi(t_str.c_str()) / 360.0f;
			getline(line, t_str, ',');
			float t_s = atoi(t_str.c_str()) / 100.0f;
			getline(line, t_str, ',');
			float t_l = atoi(t_str.c_str()) / 100.0f;

			float t_r = 0;
			float t_g = 0;
			float t_b = 0;

			float q = t_l < 0.5f ? t_l * (1 + t_s) : t_l + t_s - t_l * t_s;
			float p = 2 * t_l - q;

			t_r = hue2rgb(p, q, t_h + 1/3.0f);
			t_g = hue2rgb(p, q, t_h);
			t_b = hue2rgb(p, q, t_h - 1/3.0f);
		
			cout << "RGB(" << (int)floor(t_r * 255 + 0.5f) << "," << (int)floor(t_g * 255 + 0.5f) << "," << (int)floor(t_b * 255 + 0.5f) << ")" << endl;
		}
		else if (t_strInput.substr(0, 3).compare("HSV") == 0)
		{
			t_strInput = t_strInput.substr(4, t_strInput.length() - 5);
			istringstream line(t_strInput);

			getline(line, t_str, ',');
			float t_h = atoi(t_str.c_str());
			getline(line, t_str, ',');
			float t_s = atoi(t_str.c_str()) / 100.0f;
			getline(line, t_str, ',');
			float t_v = atoi(t_str.c_str()) / 100.0f;

			float t_r = 0;
			float t_g = 0;
			float t_b = 0;

			float t_c = t_v * t_s;
			float t_mod = (t_h / 60.0f);
			int t_cH = (int)t_h / 60;
			t_mod -= t_cH / 2 * 2;
			float t_abs = t_mod - 1.0f;
			if (t_mod - 1.0f < 0.0f)
			{
				t_abs *= -1.0f;
			}
			
			float t_x = t_c * (1 - t_abs);
			float t_m = t_v - t_c;
			
			switch (t_cH)
			{
			case 0:
				{
					t_r = t_c + t_m;
					t_g = t_x + t_m;
					t_b = 0 + t_m;
				}break;

			case 1:
				{
					t_r = t_x + t_m;
					t_g = t_c + t_m;
					t_b = 0 + t_m;
				}break;

			case 2:
				{
					t_r = 0 + t_m;
					t_g = t_c + t_m;
					t_b = t_x + t_m;
				}break;

			case 3:
				{
					t_r = 0 + t_m;
					t_g = t_x + t_m;
					t_b = t_c + t_m;
				}break;

			case 4:
				{
					t_r = t_x + t_m;
					t_g = 0 + t_m;
					t_b = t_c + t_m;
				}break;

			case 5:
				{
					t_r = t_c + t_m;
					t_g = 0 + t_m;
					t_b = t_x + t_m;
				}break;
			}

			cout << "RGB(" << (int)floor(t_r * 255 + 0.5f) << "," << (int)floor(t_g * 255 + 0.5f) << "," << (int)floor(t_b * 255 + 0.5f) << ")" << endl;
		}
	}

	t_file.close();

	return 0;
}
