/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 12:40:59 by edepauw           #+#    #+#             */
/*   Updated: 2021/02/17 18:58:21 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>       // std::cout

class Fixed{

	public:
		Fixed( void );
		Fixed(Fixed &fixed);
		~Fixed( void );
		void setRawBits(int const raw);
		int getRawBits(void) const;

	private:
		int _value;
		static const int _bits = 8;
};

#endif
