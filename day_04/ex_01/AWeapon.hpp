#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class AWeapon
{
	protected:
		std::string _Name;
		std::string _Sound;
		unsigned int _Dmg;
		unsigned int _Ap;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon( void );
		std::string virtual getName( void ) const;
		int getAPCost( void ) const;
		int getDamage( void ) const;
		virtual void attack() const = 0;
};
