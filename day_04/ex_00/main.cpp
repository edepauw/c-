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
Peon j("joe");
Murloc mu("mumu");

std::cout << robert << jim << mu << j;
robert.polymorph(jim);
robert.polymorph(mu);
robert.polymorph(j);
return 0;
}