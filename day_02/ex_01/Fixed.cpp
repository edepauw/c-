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

#include "Fixed.hpp"

Fixed::Fixed( int const val)
{
	std::cout << "Int constructor called" << std::endl;
	_value = (int)(roundf(val * (1 << _bits)));

}

Fixed::Fixed( float const val)
{
	std::cout << "Float constructor called" << std::endl;
	_value = (int)(roundf(val * (1 << _bits)));
}

Fixed::Fixed( void ): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=( Fixed const&  f )
{
	std::cout << "Assignation operator called" << std::endl;
	_value = f.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream& os, Fixed const &f)
{
	os << f.toFloat();
	return os;
}

int	Fixed::toInt( void ) const
{
	return ((double)_value / (double)(1 << _bits));
}

float		Fixed::toFloat( void ) const
{
	return ((double)_value / (double)(1 << _bits));
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int		Fixed::getRawBits( void ) const
{
	return(_value);
}

