/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:22:18 by eliott            #+#    #+#             */
/*   Updated: 2021/05/27 10:55:21 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "zombieEvent.hpp"

int main(void)
{
	ZombieEvent z;
	Zombie *zombie;

	z.setZombieType("Runner");
	z.setZombieType("Cracker");
	zombie = z.newZombie("jean");
	zombie->advert();
	delete zombie;
	z.setZombieType("Cracker");
	zombie = z.RandomChump();
	zombie->advert();
	delete zombie;
}
