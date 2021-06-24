
#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class Victim
{
	public:
		Victim(std::string name);
		virtual void getPolymorphed( void ) const;
		std::ostream& introduce( void );
		Victim( Victim const & f );
		Victim& operator=( Victim const & f );
		std::string getName(void) const;
		virtual ~Victim( void );
	protected:
		Victim( void );
		std::string _Name;
};
std::ostream& operator<<(std::ostream& os, Victim const &s);
#endif
