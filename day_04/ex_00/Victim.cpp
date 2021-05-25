#include "Victim.hpp"

Victim::Victim( void )
{
}

Victim::Victim(std::string name)
{
	_Name = name;
	std::cout<< "Some random victim called "  << _Name << " just appeared!" << std::endl;
}

std::string Victim::getName( void ) const
{
	return(_Name);
}

void Victim::getPolymorphed( void ) const
{
	std::cout << _Name << " has been turned into a cute little sheep!" << std::endl;
}


Victim::~Victim( void )
{
	std::cout << "Victim " << _Name << " just died for no apparent reason!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Victim const &s)
{
	os << "I'm " << s.getName() << " and I like otters!" << std::endl;
	return(os);
}
