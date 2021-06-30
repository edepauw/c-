/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 14:24:11 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/29 14:24:34 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:

		TacticalMarine( void );
		TacticalMarine( TacticalMarine const & src );
		~TacticalMarine( void );

		TacticalMarine & operator=( TacticalMarine const & rhs );
		virtual ISpaceMarine* clone( void ) const;
		void battleCry( void ) const;
		void rangedAttack( void ) const;
		void meleeAttack( void ) const;
};

#endif