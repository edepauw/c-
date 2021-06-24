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
SuperTrap::SuperTrap( void ): FragTrap(), NinjaTrap()
{
	_HitPoints = 100;
    _Name = "N/A";
	_MaxHitPoints = 100;
	_Type = "SUP3R-TP";
	_MaxEnergyPoints = 120;
    _EnergyPoints = 120;
	_Level = 1;
	_MeleeAttackDamage = 60;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 5;
    std::cout << "SUP3R-TP on!" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const & f)
{
	*this = f;
    std::cout << _Type <<" "<< _Name <<", and i'm just a copy..." << std::endl;
}

SuperTrap& SuperTrap::operator=( SuperTrap const & f )
{
	_HitPoints = f._HitPoints;
    _Name = f._Name;
	_MaxHitPoints = f._MaxHitPoints;
	_Type = f._Type;
	_MaxEnergyPoints = f._MaxEnergyPoints;
    _EnergyPoints = f._EnergyPoints;
	_Level = f._Level;
	_MeleeAttackDamage = f._MeleeAttackDamage;
	_RangedAttackDamage = f._RangedAttackDamage;
	_ArmorDamageReduction = f._ArmorDamageReduction;
	return *this;
}


SuperTrap::SuperTrap( std::string name ): FragTrap(), NinjaTrap()
 {
	_HitPoints = 100;
    _Name = name;
	_MaxHitPoints = 100;
	_Type = "SUP3R-TP";
	_MaxEnergyPoints = 120;
    _EnergyPoints = 120;
	_Level = 1;
	_MeleeAttackDamage = 60;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 5;
    std::cout << _Type <<" "<< name <<", and i serve Handsome Jack!" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
   	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap( void )
{
    std::cout << "SUP3R-TP off!" << std::endl;
}