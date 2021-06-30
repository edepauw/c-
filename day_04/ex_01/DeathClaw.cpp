#include "DeathClaw.hpp"

DeathClaw::DeathClaw (void ): Enemy(300, "Deathclaw")
{
    std::cout << "AAAAAAaaaargghh!" << std::endl;
}

DeathClaw::~DeathClaw( void )
{
    std::cout <<  "EEEEuuuurghhh !" << std::endl;
}

DeathClaw & DeathClaw::operator=( DeathClaw const & f)
{
    _HP = f._HP;
    _Type = f._Type;
    return (*this);
}

DeathClaw::DeathClaw( DeathClaw const & f): Enemy(f._HP, f._Type)
{
    std::cout <<  "AAAAAAaaaargghh!" << std::endl;
}

void DeathClaw::takeDamage(int val)
{
    val /= 2;
    if (val > 0)
    {
        if (_HP - val > 0)
            _HP -= val;
        else
            _HP = 0;
    }
}
