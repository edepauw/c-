#include <iostream>
#include <cctype>
#include <string>
// #include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return 1;
    try{
        std::cout << std::stod(av[1]) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;

}