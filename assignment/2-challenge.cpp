#include <iostream>


class Pair {
	public: 
		int first, second;
		void check() {
			first = 5;
			std::cout << "Congrats " << std::endl;
		}
};


Pair *pairFactory() {

	Pair *instance = new Pair;
	std::cout << "Allocated memory at " << instance << std::endl;
	return instance;
}


int main() {

	Pair *p;
	p = pairFactory();

	p->check();
	
	std::cout << "Allocated memory returned " << p << std::endl;
	delete p;

	std::cout << "Main program finishes execution" << std::endl;
	return 0;
}
