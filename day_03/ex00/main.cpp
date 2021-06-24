/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/15 09:46:18 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap david("david");
    david.meleeAttack("jean");
    david.vaulthunter_dot_exe("benoit");
    david.vaulthunter_dot_exe("jack");
    david.vaulthunter_dot_exe("michel");
    david.vaulthunter_dot_exe("michel");
    david.vaulthunter_dot_exe("michel");
    david.takeDamage(40);
    david.takeDamage(40);
    david.takeDamage(40);
    david.rangedAttack( "philippe");
    david.rangedAttack( "philippe");
    david.beRepaired(40);
    david.beRepaired(40);
    david.beRepaired(40);
}