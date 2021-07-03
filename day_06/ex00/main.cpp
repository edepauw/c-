#include <iostream>
#include <cctype>
#include <string>
#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return 1;
    try{
        Convert c(av[1]);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;

}