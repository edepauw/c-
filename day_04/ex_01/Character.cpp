#include "Character.hpp"

Character::Character(std::string const & name): _Name(name), _Weapon(NULL), _AP(40), _equiped(0)
{

}

Character::Character(Character const & c)
{
    *this = c;
}

Character::~Character( void )
{

}

Character::Character( void )
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
    if (w == NULL)
        return;
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
    if (_equiped == 0 || e == NULL || e->getHP() == 0)
        return ;
    if (getAP() < _Weapon->getAPCost())
    {    std::cout << _Name <<" have not enough AP to fight!" << std::endl;
        return ;
    }
    std::cout << _Name <<" attacks " << e->getType() << " with a " << _Weapon->getName() << std::endl;
    _Weapon->attack();
    e->takeDamage(_Weapon->getDamage());
    _AP -= _Weapon->getAPCost();
    if (e->getHP())
        std::cout << e->getType() << " is alive and has " << e->getHP() << "." << std::endl;
    else
    {
        std::cout << e->getType() << " is dead." << std::endl;
        delete e;
    }

}

std::string const Character::getName() const
{
    return(_Name);
}

AWeapon & Character::getWeapon() const
{
    return(*_Weapon);
}