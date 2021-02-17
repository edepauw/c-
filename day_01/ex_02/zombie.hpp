/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 13:02:00 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper

class Zombie{

	public:
		Zombie(std::string name, std::string type);
		~Zombie( void );
        void advert( void );
		std::string	name;
		std::string type;

};

#endif
