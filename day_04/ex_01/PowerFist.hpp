#ifndef POWERFIST_HPP
# define POWERFIST_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include "AWeapon.hpp"
#include <cstdlib>

class PowerFist : public AWeapon 
{
	public:
		PowerFist( void );
		PowerFist(PowerFist const & f);
		PowerFist & operator=(PowerFist const & f);
		virtual ~PowerFist( void );
		void attack() const;
};
#endif
