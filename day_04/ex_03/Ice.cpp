/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:48:21 by juan              #+#    #+#             */
/*   Updated: 2021/04/01 08:07:59 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{

}

Ice::~Ice( void )
{

}

Ice::Ice( Ice const & src ): AMateria(src)
{

}

Ice & Ice::operator=( Ice const & rhs )
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;
	return *this;
}

Ice *	Ice::clone( void ) const
{
	Ice *newice = new Ice(*this);
	return (newice);
}

void	Ice::use( ICharacter & target )
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}
