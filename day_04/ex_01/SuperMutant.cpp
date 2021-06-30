#include "SuperMutant.hpp"

SuperMutant::SuperMutant (void ): Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant( void )
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & f)
{
    _HP = f._HP;
    _Type = f._Type;
    return (*this);
}

SuperMutant::SuperMutant( SuperMutant const & f) : Enemy(f._HP,f._Type)
{
    std::cout <<  "Gaaah. Me want smash heads!" << std::endl;
}

void SuperMutant::takeDamage(int val)
{
    val -= 3;
    if (val > 0)
    {
        if (_HP > (u_int)val)
            _HP -= val;
        else
            _HP = 0;
    }
}
