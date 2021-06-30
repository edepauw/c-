#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50)
{
	
}

PowerFist::~PowerFist( void )
{

}

PowerFist & PowerFist::operator=(PowerFist const & f)
{
	_Name = f._Name;
	_Dmg = f._Dmg;
	_Ap = f._Ap;
	return (*this);
}

PowerFist::PowerFist( PowerFist const & f) : AWeapon(f._Name, f._Ap, f._Dmg)
{
}

void PowerFist::attack( void ) const
{
	std::cout <<  "* pschhh... SBAM! *" << std::endl;
}
