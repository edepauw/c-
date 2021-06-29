/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:17:49 by juan              #+#    #+#             */
/*   Updated: 2021/03/31 08:53:45 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

public:

	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	AMateria & operator=( AMateria const & rhs );	
	virtual ~AMateria( void );

	std::string const & getType( void ) const;
	unsigned int getXP( void ) const;
	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter& target );

protected:

	AMateria( void );
	std::string _type;
	unsigned int _xp;

};

#endif
