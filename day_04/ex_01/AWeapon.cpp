#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	_Name = name;
	_Ap = apcost;
	_Dmg = damage;
}

AWeapon::~AWeapon( void )
{
}

AWeapon::AWeapon( void )
{
}

AWeapon &AWeapon::operator=(AWeapon const &t)
{
	this->_Name = t._Name;
	this->_Ap = t._Ap;
	this->_Dmg = t._Dmg;
	return (*this);
}

AWeapon::AWeapon(AWeapon const &t)
{
	*this = t;
}

std::string const AWeapon::getName( void ) const
{
	return(_Name);
}


int AWeapon::getAPCost( void ) const
{
	return(_Ap);
}

int AWeapon::getDamage( void ) const
{
	return (_Dmg);
}
