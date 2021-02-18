/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:22:18 by eliott            #+#    #+#             */
/*   Updated: 2021/02/17 16:30:38 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

int main(void)
{
	ZombieHorde * z = new ZombieHorde(30);
	z->announce();
	delete z;
}
