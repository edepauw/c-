#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _Type(type) , _HP(hp)
{

}

Enemy::~Enemy( void )
{

}

Enemy &Enemy::operator=(Enemy const &t)
{
	this->_HP = t._HP;
	this->_Type = t._Type;
    return(*this);
}

void Enemy::takeDamage(int val)
{
    if (val > 0)
    {
        if (_HP - val > 0)
            _HP -= val;
        else
            _HP = 0;
    }
}

Enemy::Enemy(Enemy const &t) : _Type(t._Type), _HP(t._HP)
{

}

std::string const Enemy::getType( void ) const
{
	return(_Type);
}


int Enemy::getHP( void ) const
{
	return(_HP);
}
