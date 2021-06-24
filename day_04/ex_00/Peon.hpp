
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
		Peon(Peon const &f);
		Peon& operator=( Peon const & f );
		void getPolymorphed( void ) const;
		virtual ~Peon( void );
	private:
		Peon(void);

};
#endif
