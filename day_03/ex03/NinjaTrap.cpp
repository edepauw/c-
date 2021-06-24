/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/22 17:27:28 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
NinjaTrap::NinjaTrap( void ): ClapTrap("N/A", 60, 60, 120, 120,1, "N1NJ4-TP", 60, 5, 0)
{
    srand(time(NULL));
    std::cout << "N1NJ4-TP on!" << std::endl;
}

NinjaTrap::NinjaTrap( std::string name ): ClapTrap(name, 60, 60, 120, 120,1, "N1NJ4-TP", 60, 5, 0)
{
    srand(time(NULL));
    std::cout << _Type <<" "<< name <<", and i serve Handsome Jack!" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & f)
{
    srand(time(NULL));
    *this = f;
    std::cout << _Type <<" "<< _Name <<", and i'm just a copy..." << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
    if(this->checkEnergy(5))
        std::cout << _Type  << " "<< _Name <<  " attaque " << target << " à distance, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
    if(this->checkEnergy(5))
        std::cout << _Type  << " " << _Name <<  " attaque " << target << " au CàC, causant " << _MeleeAttackDamage << " points de dégâts !" << std::endl;
}

NinjaTrap& NinjaTrap::operator=( NinjaTrap const & f )
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

NinjaTrap::~NinjaTrap( void )
{
    std::cout << "N1NJ4-TP off!" << std::endl;
}

void NinjaTrap::ninjaShoebox( FragTrap & ft )
{
    std::cout << _Type  << " " << _Name << " attaque " << ft.getName() << std::endl;
    ft.takeDamage(50 +( rand() % 10));
}

void NinjaTrap::ninjaShoebox( ScavTrap & st )
{
    std::cout << _Type  << " " << _Name << " frappe " << st.getName() << std::endl;
    st.takeDamage(50 + (rand() % 10));
}

void NinjaTrap::ninjaShoebox( ClapTrap & ct )
{
    std::cout << _Type  << " "<<  _Name << " torture " << ct.getName() << std::endl;
    ct.takeDamage(50 + (rand() % 10));
}

void NinjaTrap::ninjaShoebox( NinjaTrap & nt )
{
    std::cout << _Type  << " " << _Name << " demonte " << nt.getName() << std::endl;
    nt.takeDamage(50 + (rand() % 10));
}
