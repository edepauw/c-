/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:20:09 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/30 12:08:16 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ): _unit(NULL), _count(0)
{

}

Squad::~Squad( void )
{
	int i = 0;
	while (i < _count)
	{
		if (_unit != NULL)
			delete _unit[i];
		i++;
	}
	delete [] _unit;
}

Squad::Squad( ISquad const & src ): _unit(NULL), _count(0)
{
	int i = 0;
	while (i < _count)
	{
		push(src.getUnit(i)->clone());
		i++;
	}
}

Squad & Squad::operator=( ISquad const & rhs)
{
	int i = 0;
	while (i < _count)
	{
		delete _unit[i];
		i++;
	}
	delete [] _unit;	
	_count = 0;
	i = 0;
	while (i < _count)
	{
		push(rhs.getUnit(i)->clone());
		i++;
	}
	return *this;
}

int		Squad::getCount( void ) const
{
	return _count;
}

ISpaceMarine *	Squad::getUnit( int N ) const
{
	if (N < 0 || N >= _count)
		return (NULL);
	return _unit[N];
}

int		Squad::push( ISpaceMarine *unit_push )
{
	int i = 0;
	if (unit_push)
	{
		while (i < _count)
		{
			if (_unit[i] == unit_push){
				std::cout << "Cannot push same unit!" << std::endl;
				return(_count);
			}
			i++;
		}
		ISpaceMarine **tmp = new ISpaceMarine*[_count + 1];
		i = 0;
		while (i < _count)
		{
			tmp[i] = _unit[i];
			i++;
		}
		tmp[_count] = unit_push;
		delete [] _unit;
		_unit = tmp;
		_count++;
	}
	return (_count);
}
