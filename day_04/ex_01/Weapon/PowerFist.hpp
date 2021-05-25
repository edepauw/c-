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
		virtual ~PowerFist( void );
		void attack() const;
};
#endif
