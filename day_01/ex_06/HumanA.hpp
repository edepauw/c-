/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 10:14:32 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/18 09:30:02 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper
#include <cstdlib>

class HumanA{

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
        void attack(void);
	private:
		std::string _name;
		Weapon &_weapon;
};

#endif
