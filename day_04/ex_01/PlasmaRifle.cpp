#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & f)
{
	_Name = f._Name;
	_Dmg = f._Dmg;
	_Ap = f._Ap;
	return (*this);
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & f) : AWeapon(f._Name, f._Ap, f._Dmg)
{
}

PlasmaRifle::~PlasmaRifle( void )
{

}

void PlasmaRifle::attack( void ) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
