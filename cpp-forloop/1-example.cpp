#include <iostream>
#include <vector>

int main()
{
	std::vector<int> int_list;
	int_list.push_back(1);
	int_list.push_back(2);
	int_list.push_back(3);

	for (int x: int_list) {
		//Changes made to the temporary variables will not change the 
		//actual list
		x = 99;	
	}

	for (int & x: int_list) {
		if (x == 3) {
			x = 5;	
		}

		std::cout << "This item is: " << x << std::endl;	
	}

	std::cout << "Use constant reference variable to avoid copying list content" << std::endl;
	for (const int & x: int_list) {
		std::cout << "This item is: " << x << std::endl;	
	}

	return 0;
}
