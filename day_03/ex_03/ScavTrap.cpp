/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/22 17:27:28 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name )
{
    srand(time(NULL));
    _HitPoints = 100;
    _Name = name;
	_MaxHitPoints = 100;
	_Type = "SC4V-TP";
	_MaxEnergyPoints = 50;
	_Level = 1;
	_MeleeAttackDamage = 20;
	_RangedAttackDamage = 15;
	_ArmorDamageReduction = 3;
    std::cout << _Type <<"("<< name <<"), and i serve Handsome Jack!" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "Bye Jack!" << std::endl;
}

void ScavTrap::challengeNewcomer( void )
{
    int nb;
    nb = rand() % 5;
    std::cout << _Type << " " << _Name << " :";
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

