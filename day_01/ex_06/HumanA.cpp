/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:14:51 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/18 09:31:02 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon):_name(name), _weapon(weapon)
{
}

HumanA::~HumanA( void )
{
    
}

void HumanA::attack( void )
{
    std::cout << _name << "  attacks with his " << _weapon.getType() << std::endl;
}
