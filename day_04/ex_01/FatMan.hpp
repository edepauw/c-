#ifndef FATMAN_HPP
# define FATMAN_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include "AWeapon.hpp"
#include <cstdlib>

class FatMan : public AWeapon 
{
	public:
		FatMan( void );
		virtual ~FatMan( void );
		void attack() const;
};
#endif
