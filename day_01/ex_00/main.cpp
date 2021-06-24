#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony ponyStack = Pony("name", 69 , 13, "red", "n/a");    

}

void ponyOnTheHeap()
{
    Pony  *ponyHeap = new Pony("name", 96, 12, "blue", "n/a");
    delete ponyHeap;
}

int main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
}