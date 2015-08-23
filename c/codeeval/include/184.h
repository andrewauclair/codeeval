#ifndef _CP184_H_
#define _CP184_H_

#include "problem.h"
#include <string>
using namespace std;

class CP184 : public CProblem
{
	typedef CProblem super;
	
public:
	CP184();
	virtual ~CP184();
	virtual void vRun();
protected:
	void vBubbleSort(vector<string> &p_vector);
	string strDecodeBWT(string p_str);

};
#endif
