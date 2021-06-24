/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/21 17:21:21 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): ClapTrap(name, 100, 100, 50, 50,1, "SC4V-TP", 20, 15, 3)
{
    srand(time(NULL));
    std::cout << _Type <<" "<< name <<" , and i serve Handsome Jack!" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & f)
{
    srand(time(NULL));
    *this = f;
    std::cout << _Type <<" "<< _Name <<", and i'm just a copy..." << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    if(this->checkEnergy(5))
    {
        std::cout << _Type <<  " " << _Name <<  " attaque " << target << " à distance, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
        _EnergyPoints -= 5;
    }
}


void ScavTrap::meleeAttack(std::string const &target)
{
    if(this->checkEnergy(5))
    {
        std::cout << _Type <<  " " << _Name <<  " attaque " << target << " au CàC, causant " << _MeleeAttackDamage << " points de dégâts !" << std::endl;
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
    _Type = f._Type;
    _Level = f._Level;
    _Name = f._Name;
	return *this;
}
ScavTrap::~ScavTrap( void ) 
{
    std::cout << "SC4V-TP off!" << std::endl;
}
ScavTrap::ScavTrap( void ): ClapTrap("N/A", 100, 100, 50, 50, 1, "SC4V-TP", 20, 15, 3)
{
    std::cout << "SC4V-TP on!" << std::endl;
}

void ScavTrap::challengeNewcomer( void )
{
    int nb = rand() % 5;
    std::cout << _Type << " " << _Name << " :";
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

