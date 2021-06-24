/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:55:10 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/24 10:14:49 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class ClapTrap{

	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & f );
		ClapTrap& operator=( ClapTrap const & f );
		void takeDamage(unsigned int amount);
		std::string getName(void);
		void beRepaired(unsigned int amount);
		virtual ~ClapTrap( void );
	protected:
		ClapTrap(	std::string name, int HitPoints, int MaxHitPoints, int  EnergyPoints , int MaxEnergyPoints, int Level,
					std::string Type, int MeleeAttackDamage, int RangedAttackDamage, int ArmorDamageReduction);
		int checkEnergy(unsigned int cost);
		int _HitPoints;
		int _MaxHitPoints;
		int _EnergyPoints;
		int _MaxEnergyPoints;
		int _Level;
		std::string _Name;
		std::string _Type;
		int _MeleeAttackDamage;
		int _RangedAttackDamage;
		int _ArmorDamageReduction;
};

#endif
