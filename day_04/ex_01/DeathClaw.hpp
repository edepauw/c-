#ifndef DEATHCLAW_HPP
# define DEATHCLAW_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "Enemy.hpp"

class DeathClaw : public Enemy
{
    public:
        DeathClaw( void );
        DeathClaw(DeathClaw const &f);
        DeathClaw & operator=(DeathClaw const &f);
        virtual ~DeathClaw( void);
        void takeDamage(int);
};

#endif