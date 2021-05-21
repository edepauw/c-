/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/21 11:58:12 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ): _Name(name)
{
    srand(time(NULL));
    	_HitPoints = 100;
		_MaxHitPoints = 100;
		_EnergyPoints = 50;
		_MaxEnergyPoints = 50;
		_Level = 1;
		_MeleeAttackDamage = 20;
		_RangedAttackDamage = 15;
		_ArmorDamageReduction = 3;
    std::cout << "Hello i'm FR4G-TP("<< name <<"), and i serve Handsome Jack!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "Bye Jack!" << std::endl;
}

void ScavTrap::challengeNewcomer( void )
{
    int nb;
    nb = rand() % 5;
    if(nb == 0)
        std::cout << "Yo l'etranger ca te dirait de me faire une soixantaine de pompe pour entrer" << std::endl;
    if(nb == 1)
        std::cout << "Est tu capable de me trouver le 42 eme chiffre apres la virgule dans pi?" << std::endl;
    if(nb == 2)
        std::cout << "Salut vagabond, peux tu me ramener un peu d'huile du nepal, c'est pour mes rhumathisme!" << std::endl;
    if(nb == 3)
        std::cout << "J'apparais au début de la nuit et à la fin du matin. On me retrouve également deux fois dans une année. Qui suis-je ?" << std::endl;
    if(nb == 4)
        std::cout << "Si tu lèches ton coude je te fais rentrer!" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    if(this->checkEnergy(10))
        std::cout << "FR4G-TP " << _Name <<  " attaque " << target << " à distance, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
}

int ScavTrap::checkEnergy( unsigned int cost)
{
    if(_EnergyPoints > cost)
        return (1);
    std::cout << _Name << " est a court d'energie!" << std::endl;
    return (0);
}

void ScavTrap::meleeAttack(std::string const &target)
{
    if(this->checkEnergy(5))
        std::cout << "FR4G-TP " << _Name <<  " attaque " << target << " au CàC, causant " << _RangedAttackDamage << " points de dégâts !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int val)
{
    if (_HitPoints - (val - _ArmorDamageReduction) > 0)
        _HitPoints -= val - _ArmorDamageReduction;
    else
        _HitPoints = 0;
    std::cout << "FR4G-TP " << _Name <<  " a pris " << val << " point de degats, il lui reste " << _HitPoints << "HP!" << std::endl;

}
void ScavTrap::beRepaired(unsigned int val)
{
    if (_HitPoints + val < _MaxHitPoints)
        _HitPoints += val;
    else
        _HitPoints = _MaxHitPoints;
    std::cout << "FR4G-TP " << _Name <<  " a recuperé " << val << " points de vie, il a maintenant " << _HitPoints << "HP!" << std::endl;
}