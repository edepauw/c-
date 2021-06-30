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
	_inventory = new AMateria*[4];
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
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
	return _name;
}

Character & Character::operator=( Character const & rhs )
{
	int i = 0;
	while (i <= _count)
	{
		delete _inventory[i];
		i++;
	}
	delete [] _inventory;
	i = 0;
	if (this != &rhs)
	{
		_inventory = new AMateria*[rhs._count];
		_name = rhs._name;
		_count = rhs._count;
		while (i <= _count)
		{
			_inventory[i] = rhs._inventory[i]->clone();
			i++;
		}
	}
	return *this;
}

void	Character::equip( AMateria * materia )
{
	if (materia == NULL)
		return ;
	if (_count > 3)
		return ;
	_inventory[_count] = materia;
	_count++;
}

void	Character::use( int i, ICharacter& target )
{
	if (_inventory[i] == NULL)
		return ;
	_inventory[i]->use(target);

}

void	Character::unequip( int i )
{
	if (i >= 0 && i <= _count)
		_inventory[i] = NULL;
}
