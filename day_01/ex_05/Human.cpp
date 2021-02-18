/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:34:17 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 12:51:09 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
Human::Human( void )
{
	this->brain = new Brain();
}

Human::~Human( void )
{
	delete this->brain;
}

void *Human::identify( void )
{
	return this->brain->identify();
}
Brain &Human::getBrain( void )
{
	return *this->brain;
}


