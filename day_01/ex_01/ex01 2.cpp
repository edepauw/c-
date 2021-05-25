
#include <iostream>       // std::cout
#include <string>         // std::string

void memoryLeak() {
    std::string*        panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
    delete panthere;    //leaks -atExit -- ./a.out
}
int main(void)
{
    memoryLeak();
}