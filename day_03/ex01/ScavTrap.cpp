/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/21 17:10:10 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100) , _Level(1), _Name(name), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5)
{
    srand(time(NULL));
    std::cout << "SC4V-TP" <<" "<< name <<" , and i serve Handsome Jack!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & f)
{
    srand(time(NULL));
    *this = f;
    std::cout << "SC4V-TP" <<" "<< _Name <<", and i'm just a copy..." << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    if(this->checkEnergy(5))
    {
        std::cout << "SC4V-TP" <<  " " << _Name <<  " attaque " << target << " à distance, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
        _EnergyPoints -= 5;
    }
}

void ScavTrap::meleeAttack(std::string const &target)
{
    if(this->checkEnergy(5))
    {
        std::cout << "SC4V-TP" <<  " " << _Name <<  " attaque " << target << " au CàC, causant " << _MeleeAttackDamage << " points de dégâts !" << std::endl;
        _EnergyPoints -= 5;
    }
}

ScavTrap& ScavTrap::operator=( ScavTrap const & f )
{
    _HitPoints = f._HitPoints;
    _MaxEnergyPoints = f._MaxEnergyPoints;
    _EnergyPoints = f._EnergyPoints;
    _MaxHitPoints = f._MaxHitPoints;
    _ArmorDamageReduction = f._ArmorDamageReduction;
    _MeleeAttackDamage = f._MeleeAttackDamage;
    _RangedAttackDamage = f._RangedAttackDamage;
    _Level = f._Level;
    _Name = f._Name;
	return *this;
}
ScavTrap::~ScavTrap( void ) 
{
    std::cout << "SC4V-TP off!" << std::endl;
}
ScavTrap::ScavTrap( void ): _HitPoints(100), _MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100) , _Level(1),_Name("N/A"), _MeleeAttackDamage(30), _RangedAttackDamage(20), _ArmorDamageReduction(5)
{
    std::cout << "SC4V-TP on!" << std::endl;
}

void ScavTrap::challengeNewcomer( void )
{
    int nb = rand() % 5;
    std::cout << "SC4V-TP" << " " << _Name << " :";
    if(nb == 0)
        {std::cout << "Yo l'etranger ca te dirait de me faire une soixantaine de pompe pour entrer" << std::endl;}
    if(nb == 1)
        {std::cout << "Est tu capable de me trouver le 42 eme chiffre apres la virgule dans pi?" << std::endl;}
    if(nb == 2)
        {std::cout << "Salut vagabond, peux tu me ramener un peu d'huile du nepal, c'est pour mes rhumathisme!" << std::endl;}
    if(nb == 3)
        {std::cout << "J'apparais au début de la nuit et à la fin du matin. On me retrouve également deux fois dans une année. Qui suis-je ?" << std::endl;}
    if(nb == 4)
        {std::cout << "Si tu lèches ton coude je te fais rentrer!" << std::endl;}
}

int ScavTrap::checkEnergy(int cost)
{
    if(_EnergyPoints > cost)
        return (1);
    std::cout << _Name << " est a court d'energie!" << std::endl;
    return (0);
}

void ScavTrap::takeDamage(unsigned int val)
{
    if((int) val < 0)
        return ;
    if (_HitPoints > ((int)val - _ArmorDamageReduction))
        _HitPoints -= val - _ArmorDamageReduction;
    else
        _HitPoints = 0;
    std::cout << "SC4V-TP " << _Name <<  " a pris " << val << " point de degats, il lui reste " << _HitPoints << "HP!" << std::endl;

}
void ScavTrap::beRepaired(unsigned int val)
{
    if (_HitPoints + (int)val < _MaxHitPoints)
        _HitPoints += val;
    else
        _HitPoints = _MaxHitPoints;
    std::cout << "SC4V-TP " << _Name <<  " a recuperé " << val << " points de vie, il a maintenant " << _HitPoints << "HP!" << std::endl;
}