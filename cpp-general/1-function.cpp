#include <iostream>

bool evenSum(int a[], int n);

int main()
{
	int list[] = {4, 2, 7, 8, 5, 1};
	bool result = evenSum(list, 6);
	if (result)
	{
		std::cout << "The sum is even" << std::endl;	
	}
	else 
	{
		std::cout << "The sum is odd" << std::endl;	
	}


	return EXIT_SUCCESS;
}



bool evenSum(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	std::cout << "The sum is " << sum << std::endl;
	return (sum % 2) == 0;
}
