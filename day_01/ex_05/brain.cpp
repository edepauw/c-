/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:34:17 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 16:32:16 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"


Brain::Brain( void )
{
}

Brain::~Brain( void )
{
}

std::string Brain::identify( void ) const
{
	std::stringstream ss;
	ss << this;
	return(ss.str());
}

