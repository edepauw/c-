
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper

class Weapon{

	public:
		Weapon(std::string type);
		~Weapon( void );
		std::string const &getType( void );
		void setType(std::string type);
	private:
		std::string type;
};

#endif
