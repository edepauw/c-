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
		PlasmaRifle(PlasmaRifle const & f);
		PlasmaRifle & operator=(PlasmaRifle const & f);
		virtual ~PlasmaRifle( void );
		void attack() const;
};

#endif
