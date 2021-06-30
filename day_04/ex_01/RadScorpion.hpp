#ifndef RadScorpion_HPP
# define RadScorpion_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion( void );
		RadScorpion(RadScorpion const & f);
		RadScorpion & operator=(RadScorpion const & f);
        virtual ~RadScorpion( void);
        void takeDamage(int);
};

#endif