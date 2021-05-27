
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Poney.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:38:51 by eliott            #+#    #+#             */
/*   Updated: 2020/07/19 16:07:23 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef PONY_HPP
# define PONY_HPP


#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper

class Pony {

	public:

		Pony(std::string name, int height, int age, std::string color, std::string gender);
		Pony( void );
		~Pony( void );
		private:
			std::string	name;
			int		height;
			int		age;
			std::string color;
			std::string gender;


};

#endif
