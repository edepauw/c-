#include <string>
#include <iostream>       // std::cout
int main(void)
{
	std::string yo = "HI THIS IS BRAIN";
	std::cout << yo << std::endl;
	std::string *p_yo = &yo;
	std::cout << *p_yo << std::endl;
	std::string &r_yo = yo;
	std::cout << r_yo << std::endl;
}
