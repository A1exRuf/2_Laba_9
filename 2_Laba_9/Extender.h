#include "ExtenderStruct.h"
#include <vector>
#include <algorithm>

#define EXTENDER_H
#ifdef EXTENDER_H

class Extender
{
public:
	Extender(int);
	void inputArray();
	void outputArray();
	void sortArray();
	void searchArray();
	~Extender();
private:
	int n;
	ExtenderStruct* extenderArray;
};

#endif
