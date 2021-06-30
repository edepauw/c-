/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:47:03 by juan              #+#    #+#             */
/*   Updated: 2021/04/01 08:06:47 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{

public:

	Ice( void );
	~Ice();
	Ice( Ice const & src );
	Ice & operator=( Ice const & rhs );	
	Ice* clone( void ) const;
	void use(ICharacter& target);

private:


};

#endif
