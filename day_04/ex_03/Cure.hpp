/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:37:03 by juan              #+#    #+#             */
/*   Updated: 2021/04/01 08:06:19 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{

public:

	Cure( void );
	~Cure();
	Cure( Cure const & src );
	Cure & operator=( Cure const & rhs );	
	AMateria* clone( void ) const;
	void use( ICharacter& target );

private: 

};

#endif
