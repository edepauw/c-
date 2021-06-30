/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:07:34 by edepauw         #+#    #+#             */
/*   Updated: 2021/03/31 08:55:59 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): _count(0)
{

}

MateriaSource::~MateriaSource( void )
{

}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	*this = src;
}

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs )
{
	int i = 0;
	if (this != &rhs)
	{
		this->_count = rhs._count;
		while (i <= _count)
		{
			this->_inventory[i] = rhs._inventory[i]->clone();
			i++;
		}
	}
	return *this;
}

void		MateriaSource::learnMateria( AMateria *materia )
{
	if (materia == NULL)
		return ;
	if (_count < 3)
	{
		_inventory[_count] = materia;
		_count++;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	for(int i = 0; i < _count; i++)
	{
		if((_inventory[i]->getType() == "ice") && type == "ice")
			return(new Ice());
		if((_inventory[i]->getType() == "cure") && type == "cure")
			return(new Cure());
	}
	std::cout << "No materia corresponding" << std::endl;
	return NULL;
}
