/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:23:40 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/29 14:24:33 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{

public:

	virtual ~ISquad( void ) {};
	virtual int getCount( void ) const = 0;
	virtual ISpaceMarine* getUnit( int ) const = 0;
	virtual int push( ISpaceMarine* unit ) = 0;

};

#endif
