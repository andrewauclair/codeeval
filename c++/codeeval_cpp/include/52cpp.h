#pragma once

#include "problem.h"

class CP52 : public CProblem
{
	typedef CProblem super;
	
public:
	CP52() {};
	virtual ~CP52() {};

	virtual int nRun(int argc, const char * argv[]);

protected:
	void vPrintNumber(int p_nNum);
	// 1,000,000 - Million
	//   100,000 - Hundred Thousand
	//    10,000 - Ten Thousand
	//     1,000 - Thousand
	//       100 - Hundred
	//        10 - Ten, Eleven, Twelve, Thirteen, Fourteen, Fifteen, Sixteen, Seventeen, Eighteen, Nineteen, Twenty
	//             Thirty, Forty, Fifty, Sixty, Seventy, Eighty, Ninety
	//         1 - One, Two, Three, Four, Five, Six, Seven, Eight, Nine
};
