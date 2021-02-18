/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 18:58:21 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "brain.hpp"
#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper
#include <cstdlib>
class Human{

	public:
		Human(void);
		~Human(void);
		Brain &getBrain( void );
		void *identify(void);
		std::string name;
		int age;
	private:
		Brain *brain;
};

#endif
