
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper

class Weapon{

	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon( void );
		std::string getType( void );
		void setType(std::string type);
		std::string type;
};

#endif
