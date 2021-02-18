/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 15:47:17 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "zombie.hpp"
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper
#include <cstdlib>
#include <ctime> //pour avoir une sequence differentes grace a srand(time(0))

class ZombieEvent{

	public:
		void setZombieType(std::string type);
        Zombie * newZombie(std::string name);
		Zombie * RandomChump( void );
		std::string type;

};

#endif
