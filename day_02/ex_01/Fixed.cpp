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

Fixed::Fixed( int const val): _value(val)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const val)
{
	std::cout << "Float constructor called" << std::endl;
	std::cout << val << std::endl;
	_value = val * (2 ^ _bits);
	std::cout << _value << std::endl;
}

Fixed::Fixed( void ): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	_value = fixed._value;
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
	os << f.getRawBits();
	return os;

}

int	Fixed::toInt( void ) const
{
	return ((int)this->_value);
}

float		Fixed::toFloat( void )
{
	return ((int)_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_value);
}

