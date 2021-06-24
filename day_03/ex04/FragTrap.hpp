/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:55:10 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/21 17:23:51 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

	public:
		FragTrap( std::string name );
		FragTrap( void );
		FragTrap( FragTrap const & f );
		FragTrap& operator=( FragTrap const & f );
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void vaulthunter_dot_exe(std::string const & target);
		~FragTrap( void );
};

#endif
