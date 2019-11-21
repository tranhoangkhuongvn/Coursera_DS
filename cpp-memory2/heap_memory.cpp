#include <iostream>

using namespace std;

int main()
{
	int * numPtr = new int;

	cout << "Num pointer contains: " << numPtr << endl;
	cout << "The address of numPtr: " << &numPtr << endl;
	return 0;
}
