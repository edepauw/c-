#ifndef AWEAPON_HPP
# define AWEAPON_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class AWeapon
{
	protected:
		std::string _Name;
		unsigned int _Dmg;
		unsigned int _Ap;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon &operator=(AWeapon const &t);
		virtual ~AWeapon( void );
		AWeapon(AWeapon const &p);
		std::string const getName( void ) const;
		int getAPCost( void ) const;
		int getDamage( void ) const;
		virtual void attack() const = 0;
};
#endif
