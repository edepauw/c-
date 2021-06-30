/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:26:41 by juan              #+#    #+#             */
/*   Updated: 2021/04/01 08:09:36 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( std::string const & type ): _type(type), _xp(0)
{
	_xp = 0;
}

AMateria::AMateria( AMateria const & src ): _type(src._type), _xp(src._xp)
{
}

std::string const & AMateria::getType( void ) const
{
	return _type;
}

unsigned int AMateria::getXP( void ) const
{
	return _xp;
}

void AMateria::use( ICharacter& target )
{
    std::cout << "tmp" << std::endl;
	_xp += 10;
	std::cout << "* shoots Materia at" <<  target.getName() << " *" << std::endl;
    std::cout << "tmp" << std::endl;
}

AMateria & AMateria::operator=( AMateria const & rhs )
{
	_type = rhs._type;
	_xp = rhs._xp;
	return *this;
}

AMateria::~AMateria( void )
{

}
