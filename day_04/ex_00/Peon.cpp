#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout<< "Zog zog!" << std::endl;
}

void Peon::getPolymorphed( void ) const
{
	std::cout << _Name << " has been turned into a pink pony!" << std::endl;
}

Peon::Peon( void )
{
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( Peon const & f) : Victim(f._Name)
{
	// std::cout<< "Some random victim called "  << _Name << " just appeared!" << std::endl;
	std::cout<< "Zog zog!" << std::endl;
}


Peon & Peon::operator=( Peon const &f )
{
	_Name = f._Name;
	return *this;
}
