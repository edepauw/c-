/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:20:54 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/29 14:20:57 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator( void )
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator( void )
{
	std::cout <<  "I’ll be back..." << std::endl;
}

void	AssaultTerminator::battleCry( void ) const 
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack( void ) const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack( void ) const
{
	std::cout <<  "* attacks with chainfists *" << std::endl;
}

ISpaceMarine* AssaultTerminator::clone( void ) const
{
	return (new AssaultTerminator);
}
