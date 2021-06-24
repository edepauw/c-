/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 09:52:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/21 16:34:28 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    ClapTrap g("yolo");
    ScavTrap d("scam");
    FragTrap f("Victime");
    SuperTrap s("Serpent");
    NinjaTrap j;
    
    s.ninjaShoebox(f);
    s.ninjaShoebox(f);
    s.ninjaShoebox(f);
    s.ninjaShoebox(d);
    s.ninjaShoebox(g);
    s.vaulthunter_dot_exe("un con");
    s.takeDamage(10);
    s.takeDamage(10);
    s.takeDamage(20);
    s.takeDamage(20);
    s.takeDamage(40);
    s.takeDamage(10);
    s.takeDamage(20);
    s.takeDamage(10);
    s.takeDamage(20);
    s.takeDamage(10);
    s.takeDamage(10);
}
