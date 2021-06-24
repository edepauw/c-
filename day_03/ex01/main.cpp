/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/21 11:32:38 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap d;
    FragTrap david("david");
    d = david;
    david.meleeAttack("jean");
    david.vaulthunter_dot_exe("benoit");
    david.vaulthunter_dot_exe("jack");
    david.vaulthunter_dot_exe("michel");
    david.vaulthunter_dot_exe("michel");
    david.vaulthunter_dot_exe("michel");
    david.takeDamage(40);
    david.takeDamage(-40);
    david.takeDamage(40);
    david.rangedAttack( "philippe");
    david.rangedAttack( "philippe");
    david.beRepaired(40);
    david.beRepaired(40);
    david.beRepaired(40);
    std::cout << "____________________________________" << std::endl;
    ScavTrap j;
    ScavTrap jean("jean");
    // j = jean;
    jean.meleeAttack("claude");
    jean.challengeNewcomer();
    jean.challengeNewcomer();
    jean.takeDamage(40);
    j = jean;
    j.takeDamage(40);
    jean.takeDamage(-40);
    jean.rangedAttack( "philippe");
    jean.rangedAttack( "philippe");
    jean.beRepaired(40);
    jean.beRepaired(40);
    jean.beRepaired(40);
}