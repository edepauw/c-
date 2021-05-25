#include "Character.hpp"

Character(std::string const & name): _Name(name)
{

}

Character(Character const & c);
~Character();
Character &operator=(Character const & c);
void recoverAP();
void equip(AWeapon * w);
void attack(Enemy * e);
std::string const getName() const;