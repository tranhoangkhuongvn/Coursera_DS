#include <iostream>

class Pair {
	public:
		int *pa, *pb;
		Pair(int ,int);
		Pair(const Pair &);
		~Pair();
};

Pair::Pair(int a, int b)
{
	pa = new int;
	*pa = a;
	pb = new int;
	*pb = b;

	std::cout << "Custom constructor invoked" << std::endl;
}


Pair::Pair(const Pair & obj)
{
	pa = new int;
	pb = new int;
	*pa = *(obj.pa);
	*pb = *(obj.pb);
	std::cout << "Copy constructor invoked" << std::endl;
}


Pair::~Pair() 
{
	delete pa;
	delete pb;
	std::cout << "Destructor invoked" << std::endl;
}


int main()
{
	Pair p(15, 16);
	std::cout << "Created p: " << *(p.pa)  << " and " << *(p.pa) << std::endl;

	Pair q(p);
	std::cout << "Created q: " << *(q.pa)  << " and " << *(q.pb) << std::endl;
	
	Pair *hp = new Pair(23, 42);
	std::cout << "Created *hp: " << *(hp->pa)  << " and " << *(hp->pb) << std::endl;
	delete hp;

	std::cout << "Done" << std::endl;
	return 0;
}
