/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:34:17 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 14:04:57 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): name(name), type(type)
{

}

Zombie::~Zombie( void )
{
	
}

void Zombie::advert( void )
{
	std::cout << "<" <<this->name << " (" << this->type << ")>" << " BRAAAAAAAAIIINS.." << std::endl;
}
void Zombie::announce( void )
{
	std::cout << "<" <<this->name << " (" << this->type << ")>" << " BRAAAAAAAAIIINS.." << std::endl;
}

