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
NinjaTrap::NinjaTrap( void )
{
}

NinjaTrap::NinjaTrap( std::string name )
{
    srand(time(NULL));
    _HitPoints = 60;
    _Name = name;
	_MaxHitPoints = 60;
	_Type = "NINJ4-TP";
    _EnergyPoints = 120;
	_MaxEnergyPoints = 120;
	_Level = 1;
	_MeleeAttackDamage = 60;
	_RangedAttackDamage = 5;
	_ArmorDamageReduction = 0;
    std::cout << _Type <<"("<< name <<"), and i serve Handsome Jack!" << std::endl;
}


NinjaTrap::~NinjaTrap( void )
{
    std::cout << "Bye Jack!" << std::endl;
}

void NinjaTrap::ninjaShoebox( FragTrap & ft )
{
    std::cout << _Type << _Name << " attaque " << ft.getName() << std::endl;
    ft.takeDamage(rand() % 60);
}

void NinjaTrap::ninjaShoebox( ScavTrap & st )
{
    std::cout << _Type << _Name << "attaque" << st.getName() << std::endl;
    st.takeDamage(rand() % 60);
}

void NinjaTrap::ninjaShoebox( ClapTrap & ct )
{
    std::cout << _Type << _Name << "attaque" << ct.getName() << std::endl;
    ct.takeDamage(rand() % 60);
}

void NinjaTrap::ninjaShoebox( NinjaTrap & nt )
{
    std::cout << _Type << _Name << "attaque" << nt.getName() << std::endl;
    nt.takeDamage(rand() % 60);
}
