#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title )
{
	_Name = name;
	_Title = title;
	std::cout << _Name << ", " << _Title << ", is born!" << std::endl;
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::string Sorcerer::getName( void ) const
{
	return(_Name);
}

std::string Sorcerer::getTitle( void ) const
{
	return(_Title);
}

Sorcerer::Sorcerer( Sorcerer const & f)
{
	*this = f;
	std::cout << _Name << ", " << _Title << ", is born!" << std::endl;
}


Sorcerer & Sorcerer::operator=( Sorcerer const &f )
{
	_Name = f._Name;
	_Title = f._Title;
	return *this;
}

Sorcerer::Sorcerer( void )
{
}

Sorcerer::~Sorcerer( void )
{
	std::cout << _Name << ", " << _Title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, Sorcerer const &s)
{
	os << "I'm " << s.getName() << ", " << s.getTitle() << ", and I like ponies!" << std::endl;
	return(os);
}
