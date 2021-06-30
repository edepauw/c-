/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:23:28 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/29 14:24:32 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{

public:

	virtual ~ISpaceMarine( void ) {};
	virtual ISpaceMarine* clone( void ) const = 0;
	virtual void battleCry( void ) const = 0;
	virtual void rangedAttack( void ) const = 0;
	virtual void meleeAttack( void ) const = 0;

};

#endif
