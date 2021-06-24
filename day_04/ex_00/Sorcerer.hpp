
#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer( Sorcerer const & f );
		Sorcerer& operator=( Sorcerer const & f );
		std::ostream& introduce( void ) const;
		std::string getName(void) const;
		void polymorph(Victim const &v) const;
		std::string getTitle(void) const;
		~Sorcerer( void );
	private:
		Sorcerer( void );
		std::string _Name;
		std::string _Title;
};
std::ostream& operator<<(std::ostream& os, Sorcerer const &s);
#endif
