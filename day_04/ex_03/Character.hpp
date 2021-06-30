/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 11:06:05 by juan              #+#    #+#             */
/*   Updated: 2021/03/31 08:54:08 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{

public:

	Character( std::string name );
	~Character( void );
	Character( Character const & src );
	Character & operator=( Character const & rhs );

	std::string const & getName( void ) const;
	virtual void equip( AMateria* materia );
	void unequip( int i );
	void use( int i, ICharacter& target ); 

private:

	Character( void );
	std::string _name;
	AMateria** _inventory;
	int	_count;
};

#endif
