#include "RadScorpion.hpp"

RadScorpion::RadScorpion (void ): Enemy(80,  "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion( void )
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int val)
{
    val -= 3;
    if (val < 0)
    {
        if (_HP - val > 0)
            _HP -= val;
        else
            _HP = 0;
    }
}
