/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/23 15:49:42 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name )
{
    srand(time(NULL));
    type = "CL4P-TP";
    _Name = name;
    _HitPoints = 100;
	_MaxHitPoints = 100;
    std::cout << "CL4P-TP on!" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "CL4P-TP off!" << std::endl;
}
ClapTrap::ClapTrap( void )
{
    std::cout << "CL4P-TP on!" << std::endl;
}

std::string ClapTrap::getName(void)
{
    return (_Name);
}


void ClapTrap::rangedAttack(std::string const &target)
{
    if(this->checkEnergy(5))
        std::cout << this->type << _Name <<  " attaque " << target << " au CàC, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
}

int ClapTrap::checkEnergy( unsigned int cost)
{
    if(_EnergyPoints > cost)
        return (1);
    std::cout << _Name << " est a court d'energie!" << std::endl;
    return (0);
}

void ClapTrap::meleeAttack(std::string const &target)
{
    if(this->checkEnergy(5))
        std::cout << _Type << _Name <<  " attaque " << target << " au CàC, causant " << _MeleeAttackDamage << " points de dégâts !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int val)
{
    if (_HitPoints - (val - _ArmorDamageReduction) > 0)
        _HitPoints -= val - _ArmorDamageReduction;
    else
        _HitPoints = 0;
    std::cout << "FR4G-TP " << _Name <<  " a pris " << val << " point de degats, il lui reste " << _HitPoints << "HP!" << std::endl;

}
void ClapTrap::beRepaired(unsigned int val)
{
    if (_HitPoints + val < _MaxHitPoints)
        _HitPoints += val;
    else
        _HitPoints = _MaxHitPoints;
    std::cout << "FR4G-TP " << _Name <<  " a recuperé " << val << " points de vie, il a maintenant " << _HitPoints << "HP!" << std::endl;
}

void ClapTrap::getStats( void )
{
    std::cout << "_EnergyPoints :" << _EnergyPoints << std::endl;
	std::cout << "_MaxEnergyPoints :" << _MaxEnergyPoints << std::endl;
	std::cout << "_Level :" << _Level << std::endl;
    std::cout << "_Type :" << _Type << std::endl;
    std::cout << "_Name :" << _Name << std::endl;
    std::cout << "_HitPoints :" << _HitPoints << std::endl;
	std::cout << "_MaxHitPoints :" << _MaxHitPoints << std::endl;
	std::cout << "_MeleeAttackDamage :" << _MeleeAttackDamage << std::endl;
	std::cout << "_RangedAttackDamage :" << _RangedAttackDamage << std::endl;
	std::cout << "_ArmorDamageReduction :" << _ArmorDamageReduction << std::endl;
}

