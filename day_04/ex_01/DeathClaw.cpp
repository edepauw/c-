#include "DeathClaw.hpp"

DeathClaw::DeathClaw (void ): Enemy(300, "Deathclaw")
{
    std::cout << "AAAAAAaaaargghh!" << std::endl;
}

DeathClaw::~DeathClaw( void )
{
    std::cout <<  "EEEEuuuurghhh !" << std::endl;
}

void DeathClaw::takeDamage(int val)
{
    val /= 2;
    if (val < 0)
    {
        if (_HP - val > 0)
            _HP -= val;
        else
            _HP = 0;
    }
}
