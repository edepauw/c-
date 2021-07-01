/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:19:02 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern( Intern const & c);
		Intern& operator=( Intern const & c);
		Form * makeForm(std::string const & Type, std::string const & Target);
		~Intern(void);
		Form * makeShrubberyCreationForm(std::string const & Target);
		Form * makePresidentialPardonForm(std::string const & Target);
		Form * makeRobotomyRequestForm(std::string const & Target);
};
#endif
