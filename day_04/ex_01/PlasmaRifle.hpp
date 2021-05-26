#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include "AWeapon.hpp"
#include <cstdlib>

class PlasmaRifle : public AWeapon 
{
	public:
		PlasmaRifle( void );
		virtual ~PlasmaRifle( void );
		void attack() const;
};

#endif
