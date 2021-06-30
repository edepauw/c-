/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:24:22 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/29 14:24:46 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{

public: 
	Squad( void );
	Squad( ISquad const & src );
	~Squad( void );

	Squad & operator=( ISquad const & rhs );
	int getCount( void ) const;
	ISpaceMarine* getUnit( int N ) const;
	int push( ISpaceMarine* unit );

private:

	ISpaceMarine **_unit;
	int	_count;

};

#endif
