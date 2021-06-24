#include "Murloc.hpp"

Murloc::Murloc(std::string name) : Victim(name)
{
	std::cout<< "mrrglrlrlrmgrrr!" << std::endl;
}

void Murloc::getPolymorphed( void ) const
{
	std::cout << _Name << " has been turned into a chicken!" << std::endl;
}

Murloc::Murloc( void )
{
}

Murloc::~Murloc( void )
{
	std::cout << "rwlrwlrwlrwl..." << std::endl;
}

Murloc::Murloc( Murloc const & f) : Victim(f._Name)
{
	std::cout<< "mrrglrlrlrmgrrr!" << std::endl;
}


Murloc & Murloc::operator=( Murloc const &f )
{
	_Name = f._Name;
	return *this;
}
