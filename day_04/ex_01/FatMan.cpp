#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "FatMan.hpp"

FatMan::FatMan( void ) : AWeapon("Fat Man", 15, 150)
{
	
}
FatMan::FatMan(	FatMan const & f) : AWeapon(f._Name, f._Ap, f._Dmg)
{
}

FatMan & FatMan::operator=(	FatMan const & f)
{
	_Name = f._Name;
	_Dmg = f._Dmg;
	_Ap = f._Ap;
	return (*this);
}

FatMan::~FatMan( void )
{

}

void FatMan::attack( void ) const
{
	std::cout <<  "* BOOOOOOOOOOOOM *" << std::endl;
}
