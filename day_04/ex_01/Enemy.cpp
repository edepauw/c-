#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _Type(type) , _HP(hp)
{

}

Enemy::Enemy( void )
{

}

Enemy::~Enemy( void )
{

}

Enemy::Enemy( Enemy const &t )
{
    *this = t;
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
        if (_HP > (u_int)val)
            _HP -= val;
        else
            _HP = 0;
    }
}

std::string const Enemy::getType( void ) const
{
	return(_Type);
}


int Enemy::getHP( void ) const
{
	return(_HP);
}
