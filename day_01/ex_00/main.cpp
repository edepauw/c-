#include "Pony.hpp"
void ponyOnTheStack()
{
    Pony ponyStack = Pony(std::string name, int height, int age, std::string color, std::string gender);    

}

void ponyOnTheHeap()
{
    Pony  *ponyHeap = new Pony("Jacques", 96);

    delete ponyHeap;
}