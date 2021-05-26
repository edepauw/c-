#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant( void );
        ~SuperMutant( void);
        void takeDamage(int);
};

#endif