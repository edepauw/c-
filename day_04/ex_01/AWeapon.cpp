#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "AWeapon.hpp"

AWeapon(std::string  & name, int apcost, int damage)
{
	_Name = name;
	_Ap = apcost
}

AWeapon::~AWeapon( void )
{

}
std::string virtual getName( void ) const;
int getAPCost( void ) const;
int getDamage( void ) const;
