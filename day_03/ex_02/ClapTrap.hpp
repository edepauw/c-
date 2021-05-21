/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:55:10 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/21 12:07:01 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>

class ClapTrap{

	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void vaulthunter_dot_exe(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap( void );
	private:
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
