/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:55:10 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/21 17:23:47 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap( void );
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & f );
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		ScavTrap& operator=( ScavTrap const & f );
		void challengeNewcomer( void );
		~ScavTrap( void );
	private:
		std::string chall[10];
};

#endif
