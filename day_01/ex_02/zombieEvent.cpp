/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieEvent.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:34:17 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 12:51:09 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType( std::string type)
{
	this->type = type;
}

Zombie *  ZombieEvent::newZombie(std::string name)
{
	Zombie *zomb = new Zombie(name, this->type);
	return zomb;
}

void announce(Zomb)
{
	std::cout << "Salut je m'appelle "<< zomb->name << ", et je suis un " << zomb->type << "." << std::endl;
}

Zombie *  ZombieEvent::RandomChump( void )
{
	std::string names[10] = {"Jean", "Bizon", "Lara", "Maxime", "Francois", "Pichon", "Thomas", "Juan", "Jacques", "Franck"};
	Zombie *zomb = new Zombie(names[rand() % 10], this->type);
	announce();
	return zomb;
}
