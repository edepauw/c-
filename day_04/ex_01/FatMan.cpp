#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "FatMan.hpp"

FatMan::FatMan( void ) : AWeapon("Fat Man", 15, 150)
{
	
}

FatMan::~FatMan( void )
{

}

void FatMan::attack( void ) const
{
	std::cout <<  "* BOOOOOOOOOOOOM *" << std::endl;
}
