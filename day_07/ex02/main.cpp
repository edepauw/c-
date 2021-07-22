  
#include "Array.hpp"

int main()
{
	Array<float> &arr = *new Array<float>(10);
		for (int i = 0; i != 10; i++)
			arr[i] = i;

		Array<float> &arr2 = *new Array<float>(arr);
		std::cout << "Size : "<< arr2.size() << std::endl;
	try
	{
		for (int i = 0; i != 12; i++)
			std::cout << arr2[i] << std::endl;

		delete &arr;
		delete &arr2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete &arr;
		delete &arr2;
	}
	return 0;
}