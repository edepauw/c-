/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/22 19:55:05 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name )
{
	_EnergyPoints = 100;
	_MaxEnergyPoints = 100;
	_Level = 1;
    _Type = "FR4G-TP";
    _Name = name;
    _HitPoints = 100;
	_MaxHitPoints = 100;
	_MeleeAttackDamage = 30;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 5;
    std::cout << _Type <<"("<< name <<"), and i serve Handsome Jack!" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Bye Jack!" << std::endl;
}
FragTrap::FragTrap( void )
{
    std::cout << "Bye Jack!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int nb;
    std::string attack;
    int damage;
    if(this->checkEnergy(25))
    {
        nb = rand() % 5;
        if (nb == 1)
        {
           attack = "DDOS";
            damage = 10;
        }
        if (nb == 2)
        {
            attack = "demi-tour slide";
            damage = 20;
        }
        if (nb == 3)
        {
            attack = "missile guidé";
            damage = 30;
        }
        if (nb == 4)
        {
            attack = "tire chirurgical";
            damage = 40;
        }
        if (nb == 0)
        {
            attack = "charge";
            damage = 50;
        }
        std::cout << "FR4G-TP " << _Name <<  " utilise " << attack << " sur " << target << " causant " << damage << " points de dégâts !" << std::endl;
    }
}
