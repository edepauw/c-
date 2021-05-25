/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 10:55:10 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/22 17:22:08 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NinjaTrap_HPP
# define NinjaTrap_HPP

#include <iostream>	   // std::cout
#include <ostream>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{

	public:
		NinjaTrap( void );
		NinjaTrap( std::string name );
		void ninjaShoebox( ScavTrap & st);
		void ninjaShoebox( FragTrap & ft);
		void ninjaShoebox( NinjaTrap & nt);
		void ninjaShoebox( ClapTrap & ct);
		~NinjaTrap( void );
};

#endif
