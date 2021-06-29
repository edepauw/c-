/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:12:07 by juan              #+#    #+#             */
/*   Updated: 2021/03/31 09:06:36 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string name ): _name(name), _inventory(NULL), _count(0)
{
	this->_inventory = new AMateria*[4];
}

Character::~Character( void )
{

}

Character::Character( Character const & src )
{
	*this = src;
}

std::string const & Character::getName( void ) const
{
	return this->_name;
}

Character & Character::operator=( Character const & rhs )
{
	int i = 0;
	while (i <= this->_count)
	{
		delete this->_inventory[i];
		i++;
	}
	delete [] this->_inventory;
	i = 0;
	if (this != &rhs)
	{
		this->_inventory = new AMateria*[rhs._count];
		this->_name = rhs._name;
		this->_count = rhs._count;
		while (i <= _count)
		{
			this->_inventory[i] = rhs._inventory[i]->clone();
			i++;
		}
	}
	return *this;
}

void	Character::equip( AMateria * materia )
{
	if (_count > 3)
		return ;
	_inventory[_count] = materia;
	_count++;
}

void	Character::use( int i, ICharacter& target )
{
	_inventory[i]->use(target);
}

void	Character::unequip( int i )
{
	if (i >= 0 && i <= _count)
		_inventory[i] = NULL;
}
