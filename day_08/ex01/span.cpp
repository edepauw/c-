/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:01:07 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/07/04 17:08:59 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp" 

Span::Span( unsigned int n): _n(n)
{
	_vector.reserve(n);
}

Span::~Span( void )
{

}

Span::Span( Span const & src ): _n(src._n)
{
}

Span &	Span::operator=( Span const & rhs )
{
	this->_n = rhs._n;
	return *this;
}

void	Span::addNumber( long int i )
{
	if (_vector.size() >= _n)
		throw std::out_of_range("Out of size.");
	_vector.push_back(i);
}

void	Span::generateNumberRange( long int i, long int j )
{
	for (int k = i; k <= j; k++)
		addNumber(k);
}

void	Span::printNumber( void )
{
	for (unsigned long i = 0; i < _vector.size(); i++)
		std::cout << _vector[i] << " ";
}

unsigned int	Span::shortestSpan( void )
{
	unsigned long int ret = INT_MAX;
	if (_vector.size() == 0)
		throw std::length_error("Lenght Error.");
	else if (_vector.size() == 1)
		throw std::length_error("Lenght Error.");
	else
	{
		std::sort(_vector.begin(), _vector.end());
		for (unsigned int i = _vector.size() - 1; i > 0; i--)
		{
			if ( _vector[i] - _vector[i - 1] < static_cast<int>(ret))
				ret = _vector[i] - _vector[i - 1];
		}
		return ret;
	}
	return 0;
}

unsigned int	Span::longestSpan( void )
{
	if (_vector.size() == 0)
		throw std::length_error("Lenght Error.");
	else if (_vector.size() == 1)
		throw std::length_error("Lenght Error.");
	else
	{
		unsigned int ret;
		ret = *std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end());
		return ret;
	}
	return 1;
}
