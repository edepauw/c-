#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "Weapon/AWeapon.hpp"
#include "Enemy/Enemy.hpp"

class Character
{
    private:
        std::string _Name;
        AWeapon *_Weapon;
        unsigned int _AP;
    public:
    Character(std::string const & name);
    Character(Character const & c);
    ~Character();
    Character &operator=(Character const & c);
    void recoverAP();
    void equip(AWeapon * w);
    void attack(Enemy * e);
    std::string const getName() const;
};

#endif