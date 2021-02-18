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

#include "zombieHorde.hpp"
ZombieHorde::ZombieHorde(int n):n(n)
{
	this->horde = new Zombie[n];
}

void ZombieHorde::announce(void)
{
	int i;

	i = 0;
	while (i < this->n)
	{
		this->horde[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->horde;
}



