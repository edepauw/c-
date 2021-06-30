#include "RadScorpion.hpp"

RadScorpion::RadScorpion (void ): Enemy(80,  "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion( void )
{
            std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & f)
{
    _HP = f._HP;
    _Type = f._Type;
    return (*this);
}

RadScorpion::RadScorpion( RadScorpion const & f): Enemy(f._HP,  f._Type)
{
    std::cout <<  "* click click click *" << std::endl;
}

void RadScorpion::takeDamage(int val)
{
    if (val > 0)
    {

        if (_HP > (u_int)val)
            _HP -= val;
        else
        {
            _HP = 0;
        }
    }
}
