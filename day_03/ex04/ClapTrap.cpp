/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/21 17:23:55 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name, int HitPoints, int MaxHitPoints, int  EnergyPoints , int MaxEnergyPoints, int Level,
		  std::string Type, int MeleeAttackDamage, int RangedAttackDamage, int ArmorDamageReduction)
          :  _HitPoints(HitPoints), _MaxHitPoints(MaxHitPoints), _EnergyPoints(EnergyPoints), _MaxEnergyPoints(MaxEnergyPoints), _Level(Level), _Name(name), _Type(Type),
          _MeleeAttackDamage(MeleeAttackDamage), _RangedAttackDamage(RangedAttackDamage), _ArmorDamageReduction(ArmorDamageReduction)
{
    std::srand(std::time(NULL));
    std::cout << "CL4P-TP on!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ):  _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _Name(name), _Type("CL4P-TP"),
                                        _MeleeAttackDamage(10), _RangedAttackDamage(10), _ArmorDamageReduction(5)
{
    std::srand(std::time(NULL));
    std::cout << _Type <<" "<< name <<", and i serve Handsome Jack!" << std::endl;

}

ClapTrap::ClapTrap( ClapTrap const & f):  _HitPoints(f._HitPoints), _MaxHitPoints(f._MaxHitPoints), _EnergyPoints(f._EnergyPoints), _MaxEnergyPoints(f._MaxEnergyPoints), _Level(f._Level), _Name(f._Name), _Type(f._Type),
                                    _MeleeAttackDamage(f._MeleeAttackDamage), _RangedAttackDamage(f._RangedAttackDamage), _ArmorDamageReduction(f._ArmorDamageReduction)
{
    std::srand(std::time(NULL));
    std::cout << _Type <<" "<< _Name <<", and i'm just a copy..." << std::endl;

}

ClapTrap & ClapTrap::operator=( ClapTrap const & f )
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

std::string ClapTrap::getName( void )
{
    return (_Name);
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "CL4P-TP off!" << std::endl;
}
ClapTrap::ClapTrap( void ): _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100), _Level(1), _Name("N/A"), _Type("CL4P-TP"),
                            _MeleeAttackDamage(10), _RangedAttackDamage(10), _ArmorDamageReduction(5)
{
    std::cout << "CL4P-TP on!" << std::endl;
}
int ClapTrap::checkEnergy( unsigned int cost)
{
    if(_EnergyPoints > (int)cost)
        return (1);
    std::cout << _Type << " " <<_Name << " est a court d'energie!" << std::endl;
    return (0);
}

void ClapTrap::takeDamage(unsigned int val)
{
    if ((int)val < 0)
        return ;
    if (_HitPoints > ((int)val - _ArmorDamageReduction))
        _HitPoints -= val - _ArmorDamageReduction;
    else
        _HitPoints = 0;
    std::cout << _Type << " " << _Name <<  " a pris " << (val - _ArmorDamageReduction) << " point de degats, il lui reste " << _HitPoints << "HP!" << std::endl;

}
void ClapTrap::beRepaired(unsigned int val)
{
    if ((int)val < 0)
        return ;
    if (_HitPoints + (int)val < _MaxHitPoints)
        _HitPoints += val;
    else
        _HitPoints = _MaxHitPoints;
    std::cout << _Type << " " <<  _Name <<  " a recuperé " << val << " points de vie, il a maintenant " << _HitPoints << "HP!" << std::endl;
}
