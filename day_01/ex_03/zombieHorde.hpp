/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 16:26:33 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "zombie.hpp"
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper
#include <cstdlib>
#include <ctime> //pour avoir une sequence differentes grace a srand(time(0))

class ZombieHorde{

	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void announce(void);
		Zombie *horde;
		int n;

};

#endif
