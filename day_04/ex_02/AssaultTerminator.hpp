/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:17:26 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/29 14:21:17 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator( void );
		AssaultTerminator( AssaultTerminator const & src );
		~AssaultTerminator( void );
		AssaultTerminator & operator=( AssaultTerminator const & rhs );
		virtual ISpaceMarine* clone( void ) const;
		void battleCry( void ) const;
		void rangedAttack( void ) const;
		void meleeAttack( void ) const;
};

#endif