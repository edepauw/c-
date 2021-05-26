#include "Character.hpp"

Character::Character(std::string const & name): _Name(name), _Weapon(NULL), _AP(40), _equiped(0)
{

}

Character::Character(Character const & c)
{
    *this = c;
}

Character::~Character()
{

}

Character &Character::operator=(Character const & c)
{
    this->_AP = c._AP;
    this->_Name = c._Name;
    this->_Weapon = c._Weapon;
    return (*this);
}

void Character::recoverAP( void )
{
    if (_AP > 30)
        _AP = 40;
    else
        _AP += 10;
}

int Character::isWeapon( void ) const
{
    if (_Weapon == NULL)
        return (0);
    else
        return (1);
}

int Character::getAP( void ) const 
{
        return (_AP);
}


void Character::equip(AWeapon * w)
{
    _equiped = 1;
    _Weapon = w;
}
std::ostream &operator<<(std::ostream &os, Character const & c)
{
    if (c.isWeapon())
        os << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon().getName() << std::endl;
    else
        os << c.getName() << " has " << c.getAP() << " AP is unarmed" << std::endl;
    return (os);
}

void Character::attack(Enemy * e)
{
    if (_equiped == 0)
        return ;
    std::cout << _Name <<" attacks " << e->getType() << " with a " << _Weapon->getName() << std::endl;
    _Weapon->attack();
    e->takeDamage(_Weapon->getDamage());
    _AP -= _Weapon->getAPCost();
    std::cout << e->getHP() << std::endl;
    if (e->getHP() <= 0)
        delete e;
}

std::string const Character::getName() const
{
    return(_Name);
}

AWeapon & Character::getWeapon() const
{
    return(*_Weapon);
}