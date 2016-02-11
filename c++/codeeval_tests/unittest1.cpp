#include "stdafx.h"
#include "CppUnitTest.h"
#include "problems.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace codeeval_tests
{
	class CTestHelpers
	{
	public:
		static void vRunProblem(int p_nProblem)
		{
			streambuf* t_coutStream = cout.rdbuf();
			ostringstream t_output;

			stringstream t_ss;
			t_ss << p_nProblem;

			string t_strPathIn = "in/" + t_ss.str() + "_in.txt";
			string t_strPathOut = "out/" + t_ss.str() + "_out.txt";

			const char * t_argv[] = { "unit_test", t_strPathIn.c_str() };
			
			string t_strExceptionNULL = "Problem " + t_ss.str() + " hasn't been implemented yet.";
			wstring t_wstrExceptionNULL = wstring(t_strExceptionNULL.begin(), t_strExceptionNULL.end());

			Assert::IsTrue(g_apProblems[p_nProblem - 1] != NULL, t_wstrExceptionNULL.c_str());

			cout.rdbuf(t_output.rdbuf());

			ifstream t_file(t_strPathOut);

			string t_strCompare = "";

			if (t_file.is_open())
			{
				t_file.seekg(0, ios::end);
				t_strCompare.reserve(t_file.tellg());
				t_file.seekg(0, ios::beg);

				t_strCompare.assign((istreambuf_iterator<char>(t_file)),
					istreambuf_iterator<char>());
			}

			string t_strExceptionNotEqual = "The output of problem " + t_ss.str() + " doesn't match the output in " + t_ss.str() + "_out.txt.";
			wstring t_wstrExceptionNotEqual = wstring(t_strExceptionNotEqual.begin(), t_strExceptionNotEqual.end());

			Assert::AreEqual(t_strCompare, t_output.str(), t_wstrExceptionNotEqual.c_str());
		}
	};

	TEST_CLASS(CCodeEvalTests)
	{
	public:
		
		TEST_METHOD(TestProblem1) { int t_nProblem = 1; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem2) { int t_nProblem = 2; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem3) { int t_nProblem = 3; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem4) { int t_nProblem = 4; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem5) { int t_nProblem = 5; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem6) { int t_nProblem = 6; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem7) { int t_nProblem = 7; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem8) { int t_nProblem = 8; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem9) { int t_nProblem = 9; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem10) { int t_nProblem = 10; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem11) { int t_nProblem = 11; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem12) { int t_nProblem = 12; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem13) { int t_nProblem = 13; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem14) { int t_nProblem = 14; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem15) { int t_nProblem = 15; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem16) { int t_nProblem = 16; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem17) { int t_nProblem = 17; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem18) { int t_nProblem = 18; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem19) { int t_nProblem = 19; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem20) { int t_nProblem = 20; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem21) { int t_nProblem = 21; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem22) { int t_nProblem = 22; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem23) { int t_nProblem = 23; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem24) { int t_nProblem = 24; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem25) { int t_nProblem = 25; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem26) { int t_nProblem = 26; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem27) { int t_nProblem = 27; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem28) { int t_nProblem = 28; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem29) { int t_nProblem = 29; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem30) { int t_nProblem = 30; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem31) { int t_nProblem = 31; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem32) { int t_nProblem = 32; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem33) { int t_nProblem = 33; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem34) { int t_nProblem = 34; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem35) { int t_nProblem = 35; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem36) { int t_nProblem = 36; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem37) { int t_nProblem = 37; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem38) { int t_nProblem = 38; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem39) { int t_nProblem = 39; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem40) { int t_nProblem = 40; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem41) { int t_nProblem = 41; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem42) { int t_nProblem = 42; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem43) { int t_nProblem = 43; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem44) { int t_nProblem = 44; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem45) { int t_nProblem = 45; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem46) { int t_nProblem = 46; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem47) { int t_nProblem = 47; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem48) { int t_nProblem = 48; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem49) { int t_nProblem = 49; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem50) { int t_nProblem = 50; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem51) { int t_nProblem = 51; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem52) { int t_nProblem = 52; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem53) { int t_nProblem = 53; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem54) { int t_nProblem = 54; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem55) { int t_nProblem = 55; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem56) { int t_nProblem = 56; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem57) { int t_nProblem = 57; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem58) { int t_nProblem = 58; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem59) { int t_nProblem = 59; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem60) { int t_nProblem = 60; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem61) { int t_nProblem = 61; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem62) { int t_nProblem = 62; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem63) { int t_nProblem = 63; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem64) { int t_nProblem = 64; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem65) { int t_nProblem = 65; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem66) { int t_nProblem = 66; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem67) { int t_nProblem = 67; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem68) { int t_nProblem = 68; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem69) { int t_nProblem = 69; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem70) { int t_nProblem = 70; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem71) { int t_nProblem = 71; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem72) { int t_nProblem = 72; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem73) { int t_nProblem = 73; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem74) { int t_nProblem = 74; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem75) { int t_nProblem = 75; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem76) { int t_nProblem = 76; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem77) { int t_nProblem = 77; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem78) { int t_nProblem = 78; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem79) { int t_nProblem = 79; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem80) { int t_nProblem = 80; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem81) { int t_nProblem = 81; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem82) { int t_nProblem = 82; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem83) { int t_nProblem = 83; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem84) { int t_nProblem = 84; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem85) { int t_nProblem = 85; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem86) { int t_nProblem = 86; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem87) { int t_nProblem = 87; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem88) { int t_nProblem = 88; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem89) { int t_nProblem = 89; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem90) { int t_nProblem = 90; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem91) { int t_nProblem = 91; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem92) { int t_nProblem = 92; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem93) { int t_nProblem = 93; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem94) { int t_nProblem = 94; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem95) { int t_nProblem = 95; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem96) { int t_nProblem = 96; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem97) { int t_nProblem = 97; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem98) { int t_nProblem = 98; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem99) { int t_nProblem = 99; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem100) { int t_nProblem = 100; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem101) { int t_nProblem = 101; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem102) { int t_nProblem = 102; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem103) { int t_nProblem = 103; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem104) { int t_nProblem = 104; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem105) { int t_nProblem = 105; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem106) { int t_nProblem = 106; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem107) { int t_nProblem = 107; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem108) { int t_nProblem = 108; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem109) { int t_nProblem = 109; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem110) { int t_nProblem = 100; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem111) { int t_nProblem = 111; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem112) { int t_nProblem = 112; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem113) { int t_nProblem = 113; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem114) { int t_nProblem = 114; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem115) { int t_nProblem = 115; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem116) { int t_nProblem = 116; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem117) { int t_nProblem = 117; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem118) { int t_nProblem = 118; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem119) { int t_nProblem = 119; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem120) { int t_nProblem = 120; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem121) { int t_nProblem = 121; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem122) { int t_nProblem = 122; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem123) { int t_nProblem = 123; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem124) { int t_nProblem = 124; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem125) { int t_nProblem = 125; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem126) { int t_nProblem = 126; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem127) { int t_nProblem = 127; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem128) { int t_nProblem = 128; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem129) { int t_nProblem = 129; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem130) { int t_nProblem = 130; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem131) { int t_nProblem = 131; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem132) { int t_nProblem = 132; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem133) { int t_nProblem = 133; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem134) { int t_nProblem = 134; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem135) { int t_nProblem = 135; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem136) { int t_nProblem = 136; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem137) { int t_nProblem = 137; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem138) { int t_nProblem = 138; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem139) { int t_nProblem = 139; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem140) { int t_nProblem = 140; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem141) { int t_nProblem = 141; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem142) { int t_nProblem = 142; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem143) { int t_nProblem = 143; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem144) { int t_nProblem = 144; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem145) { int t_nProblem = 145; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem146) { int t_nProblem = 146; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem147) { int t_nProblem = 147; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem148) { int t_nProblem = 148; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem149) { int t_nProblem = 149; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem150) { int t_nProblem = 150; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem151) { int t_nProblem = 151; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem152) { int t_nProblem = 152; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem153) { int t_nProblem = 153; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem154) { int t_nProblem = 154; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem155) { int t_nProblem = 155; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem156) { int t_nProblem = 156; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem157) { int t_nProblem = 157; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem158) { int t_nProblem = 158; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem159) { int t_nProblem = 159; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem160) { int t_nProblem = 160; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem161) { int t_nProblem = 161; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem162) { int t_nProblem = 162; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem163) { int t_nProblem = 163; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem164) { int t_nProblem = 164; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem165) { int t_nProblem = 165; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem166) { int t_nProblem = 166; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem167) { int t_nProblem = 167; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem168) { int t_nProblem = 168; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem169) { int t_nProblem = 169; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem170) { int t_nProblem = 170; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem171) { int t_nProblem = 171; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem172) { int t_nProblem = 172; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem173) { int t_nProblem = 173; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem174) { int t_nProblem = 174; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem175) { int t_nProblem = 175; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem176) { int t_nProblem = 176; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem177) { int t_nProblem = 177; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem178) { int t_nProblem = 178; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem179) { int t_nProblem = 179; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem180) { int t_nProblem = 180; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem181) { int t_nProblem = 181; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem182) { int t_nProblem = 182; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem183) { int t_nProblem = 183; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem184) { int t_nProblem = 184; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem185) { int t_nProblem = 185; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem186) { int t_nProblem = 186; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem187) { int t_nProblem = 187; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem188) { int t_nProblem = 188; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem189) { int t_nProblem = 189; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem190) { int t_nProblem = 190; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem191) { int t_nProblem = 191; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem192) { int t_nProblem = 192; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem193) { int t_nProblem = 193; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem194) { int t_nProblem = 194; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem195) { int t_nProblem = 195; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem196) { int t_nProblem = 196; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem197) { int t_nProblem = 197; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem198) { int t_nProblem = 198; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem199) { int t_nProblem = 199; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem200) { int t_nProblem = 200; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem201) { int t_nProblem = 201; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem202) { int t_nProblem = 202; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem203) { int t_nProblem = 203; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem204) { int t_nProblem = 204; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem205) { int t_nProblem = 205; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem206) { int t_nProblem = 206; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem207) { int t_nProblem = 207; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem208) { int t_nProblem = 208; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem209) { int t_nProblem = 209; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem210) { int t_nProblem = 210; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem211) { int t_nProblem = 211; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem212) { int t_nProblem = 212; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem213) { int t_nProblem = 213; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem214) { int t_nProblem = 214; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem215) { int t_nProblem = 215; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem216) { int t_nProblem = 216; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem217) { int t_nProblem = 217; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem218) { int t_nProblem = 218; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem219) { int t_nProblem = 219; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem220) { int t_nProblem = 220; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem221) { int t_nProblem = 221; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem222) { int t_nProblem = 222; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem223) { int t_nProblem = 223; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem224) { int t_nProblem = 224; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem225) { int t_nProblem = 225; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem226) { int t_nProblem = 226; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem227) { int t_nProblem = 227; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem228) { int t_nProblem = 228; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem229) { int t_nProblem = 229; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem230) { int t_nProblem = 230; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem231) { int t_nProblem = 231; CTestHelpers::vRunProblem(t_nProblem); }
		TEST_METHOD(TestProblem232) { int t_nProblem = 232; CTestHelpers::vRunProblem(t_nProblem); }
	};
}