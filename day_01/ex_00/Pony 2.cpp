/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:41:00 by eliott            #+#    #+#             */
/*   Updated: 2021/02/17 12:39:52 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void): name("jean"), height(12), age(3), color("grey"), gender("male")
{

}

Pony::Pony(std::string name, int height, int age, std::string color, std::string gender): name(name), height(height), age(age), color(color), gender(gender)
{

}

Pony::~Pony( void )
{
	std::cout << this->name << " just died." << std::endl;
}

