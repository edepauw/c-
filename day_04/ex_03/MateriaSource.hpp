/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw<jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:12:59 by edepauw         #+#    #+#             */
/*   Updated: 2021/03/16 09:40:28 by edepauw        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{

public:
	MateriaSource( void );
	MateriaSource( MateriaSource const & src );
	MateriaSource & operator=( MateriaSource const & rhs );
	~MateriaSource();
	void learnMateria( AMateria* materia );
	AMateria* createMateria( std::string const & type );

private:

	AMateria *_inventory[4];
	int _count;
	
};

#endif
