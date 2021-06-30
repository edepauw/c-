#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        std::string _Name;
        AWeapon *_Weapon;
        unsigned int _AP;
        Character();
        int _equiped;
    public:
        Character(std::string const & name);
        Character(Character const & c);
        virtual ~Character();
        Character &operator=(Character const & c);
        void recoverAP();
        void equip(AWeapon * w);
        std::ostream &operator<<(std::ostream &os);
        void attack(Enemy * e);
        int isWeapon( void ) const;
        std::string const getName( void ) const;
        AWeapon & getWeapon() const;
        int getAP( void ) const;
};
std::ostream &operator<<(std::ostream &os, Character const &c);

#endif