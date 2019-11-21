#include <iostream>

int main()
{
	int *n = nullptr;
	//std::cout << *n << std::endl;
	//Good practice of pointer initialisation
	int *y2(nullptr);
	int *y3{nullptr};
	int *q = new int(10);

	std::cout << *q << std::endl;

	delete q;

	std::cout << *q << std::endl;
	
	std::cout << q << std::endl;

	q = nullptr;

	return 0;
}
