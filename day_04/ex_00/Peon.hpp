
#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		virtual void getPolymorphed( void ) const;
		~Peon( void );
};
#endif
