/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/22 17:27:28 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
SuperTrap::SuperTrap( void )
{
}

SuperTrap::SuperTrap( std::string name )
{
    srand(time(NULL));
    _HitPoints = 100;
    _Name = name;
	_MaxHitPoints = 100;
	_Type = "SUP3R-TP";
	_MaxEnergyPoints = 120;
    _EnergyPoints = 120;
	_Level = 1;
	_MeleeAttackDamage = 60;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 3;
    std::cout << _Type <<"("<< name <<"), and i serve Handsome Jack!" << std::endl;
}

SuperTrap::~SuperTrap( void )
{
    std::cout << "Bye Jack!" << std::endl;
}
