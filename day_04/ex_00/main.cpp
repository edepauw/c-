#include "Victim.hpp"
#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Murloc.hpp"

// int main()
// {
//     Sorcerer robert("Robert", "the Magnificent");
//     Victim jim("Jimmy");
//     Murloc m("mumu");
//     Peon p("salut");
//     robert.polymorph(jim);
//     robert.polymorph(m);
//     robert.polymorph(p);
//     std::cout << robert << jim << m << p;
//     return 0;
// }
int main()
{
Sorcerer robert("Robert", "the Magnificent");
Victim jim("Jimmy");
Peon j("Zoe");
Peon joe(j);
std::cout << robert << jim << joe;
robert.polymorph(jim);
robert.polymorph(joe);
return 0;
}