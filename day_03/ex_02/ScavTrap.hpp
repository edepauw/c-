/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:55:10 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/21 11:43:07 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class ScavTrap{

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void challengeNewcomer( void );
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ScavTrap( void );
	private:
		std::string chall[10];
		int _HitPoints;
		int _MaxHitPoints;
		int _EnergyPoints;
		int _MaxEnergyPoints;
		int _Level;
		std::string _Name;
		int _MeleeAttackDamage;
		int _RangedAttackDamage;
		int _ArmorDamageReduction;
		int checkEnergy(unsigned int cost);
};

#endif
