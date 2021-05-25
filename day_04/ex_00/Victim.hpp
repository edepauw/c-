
#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class Victim
{
	public:
		Victim(std::string name);
		Victim( void );
		virtual void getPolymorphed( void ) const;
		std::ostream& introduce( void );
		std::string getName(void) const;
		~Victim( void );
	protected:
		std::string _Name;
};
std::ostream& operator<<(std::ostream& os, Victim const &s);
#endif
