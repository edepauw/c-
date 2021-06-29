/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:40:52 by juan              #+#    #+#             */
/*   Updated: 2021/04/01 08:08:25 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{

}

Cure::~Cure( void )
{

}

Cure::Cure( Cure const & src ): AMateria(src)
{

}

Cure & Cure::operator=( Cure const & rhs )
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return *this;
}

AMateria *	Cure::clone( void ) const
{
	Cure *newcure = new Cure(*this);
	return (newcure);
}

void	Cure::use( ICharacter & target )
{
	_xp += 10;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

