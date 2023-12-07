#include "Extender.h"

int main()
{
	Extender extender(3);
	extender.inputArray();
	extender.outputArray();
	cout << endl;
	extender.sortArray();
	extender.outputArray();
	extender.searchArray();
}