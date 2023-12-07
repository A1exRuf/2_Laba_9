#include <iostream>

#define EXTENDERSTRUCT_H
#ifdef EXTENDERSTRUCT_H

using namespace std;

enum ExtenderColor { white, black, silver };

struct ExtenderStruct
{
	int socketAmount;
	double wireLength;
	ExtenderColor color;
};
#endif