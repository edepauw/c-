/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 13:22:12 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper
#include <cstdlib>

class ZombieEvent{

	public:
		void setZombieType(std::string type);
        Zombie * newZombie(std::string name);
		Zombie * RandomChump( void );
		std::string type;

};

#endif
