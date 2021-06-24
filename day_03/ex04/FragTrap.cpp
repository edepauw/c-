/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/21 17:23:54 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): ClapTrap(name, 100, 100, 100, 100,1, "FR4G-TP", 30, 20, 5)
{
    srand(time(NULL));
    std::cout << _Type <<" "<< name <<", and i serve Handsome Jack!" << std::endl;
}

FragTrap::FragTrap( FragTrap const & f)
{
    srand(time(NULL));
    *this = f;
    std::cout << _Type <<" "<< _Name <<", and i'm just a copy..." << std::endl;

}

FragTrap::FragTrap( void ): ClapTrap("N/A", 100, 100, 100, 100,1, "FR4G-TP", 30, 20, 5)
{
    std::cout << "FR4G-TP on!" << std::endl;
}

FragTrap& FragTrap::operator=( FragTrap const & f )
{
    _HitPoints = f._HitPoints;
    _MaxEnergyPoints = f._MaxEnergyPoints;
    _EnergyPoints = f._EnergyPoints;
    _MaxHitPoints = f._MaxHitPoints;
    _ArmorDamageReduction = f._ArmorDamageReduction;
    _MeleeAttackDamage = f._MeleeAttackDamage;
    _RangedAttackDamage = f._RangedAttackDamage;
    _Type = f._Type;
    _Level = f._Level;
    _Name = f._Name;
	return *this;
}
FragTrap::~FragTrap( void )
{
    std::cout << "FR4G-TP off!" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
    if(this->checkEnergy(5))
    {
        std::cout << _Type << " " << _Name <<  " attaque " << target << " à distance, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
        _EnergyPoints -= 5;
    }
}


void FragTrap::meleeAttack(std::string const &target)
{
    if(this->checkEnergy(5))
    {
        std::cout << _Type << " " << _Name <<  " attaque " << target << " au CàC, causant " << _MeleeAttackDamage << " points de dégâts !" << std::endl;
        _EnergyPoints -= 5;
    }
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int nb;
    std::string attack;
    int damage;
    if(this->checkEnergy(25))
    {
        _EnergyPoints -= 25;
        nb = rand() % 5;
        if (nb == 0)
        {
           attack = "DDOS";
            damage = 10;
        }
        if (nb == 1)
        {
            attack = "demi-tour slide";
            damage = 20;
        }
        if (nb == 2)
        {
            attack = "missile guidé";
            damage = 30;
        }
        if (nb == 3)
        {
            attack = "tire chirurgical";
            damage = 40;
        }
        if (nb == 4)
        {
            attack = "charge";
            damage = 50;
        }
        std::cout << "FR4G-TP " << _Name <<  " utilise " << attack << " sur " << target << " causant " << damage << " points de dégâts !" << std::endl;
    }
}
