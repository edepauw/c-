/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 18:50:19 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper

class Brain{

	public:
		Brain(void);
		~Brain( void );
		Brain *identify(void);
		int age;
		int taille;
};

#endif
