#include "Peon.hpp"

Peon::Peon(std::string name)
{
	_Name = name;
	std::cout<< "Some random victim called "  << _Name << " just appeared!" << std::endl;
	std::cout<< "Zog zog!" << std::endl;
}

void Peon::getPolymorphed( void ) const
{
	std::cout << _Name << " has been turned into a pink pony!" << std::endl;
}


Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}

