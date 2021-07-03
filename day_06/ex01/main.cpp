#include "Serial.h"
const std::string red("\033[0;31m");
const std::string reset("\033[0m");
const std::string cyan("\033[0;36m");

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++){
		void* raw = serialize();
		if (!raw)
		{
			std::cout << "AllocationError" << std::endl;
			return 0;
		}
		char *c = reinterpret_cast<char *>(raw);
		std::cout << red << "---" << reset << "Test[" << red << i << reset;
		std::cout << "] in main [s1 | int |s2]" << red << "---" << reset << std::endl;
		for(int i = 0; i < 8; i++)
			std::cout << c[i];
		std::cout << " | ";
		std::cout << *reinterpret_cast<int *>(c + 8);
		std::cout << " | ";
		for(int i = 0; i < 8; i++)
			std::cout << c[i + 8 + sizeof(int)];
		std::cout << std::endl << std::endl;

		std::cout << cyan << "---" << reset << "Test[" << cyan << i << reset;
		std::cout << "] deserialize " << cyan << "---" << reset << std::endl;
		Data* data = deserialize(raw);
		std::cout << "s1 = " << data->s1 << std::endl;
		std::cout << "n  = " << data->n << std::endl;
		std::cout << "s2 = " << data->s2 << std::endl << std::endl;
		delete reinterpret_cast<char *>(raw);
		delete data;
		sleep(1);
	}
}
