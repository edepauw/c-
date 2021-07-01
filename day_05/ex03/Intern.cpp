/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:18:58 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern( Intern const & c)
{
    *this = c;
}

Intern & Intern::operator=( Intern const & c)
{
    (void)c;
    return *this;
}

Intern::~Intern(void)
{
}

Form * Intern::makeForm(std::string const & Type, std::string const & Target)
{
     Form    *(Intern::*ptr[])( std::string const & Target) =
    {
        &Intern::makePresidentialPardonForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makeShrubberyCreationForm,
    };
    std::string        _name[] =
    {
        "presidential pardon",
        "robotomy request",
        "shruberry creation"
    };
    for (int i = 0; i < 3; i++)
    {
        if (Type == _name[i])
        {
            std::cout << "Intern creates " << Type << std::endl;
            return (this->*ptr[i])(Target);
        }
    }
    std::cout << "Intern cannot create form." << std::endl;
    return NULL;
}

Form * Intern::makeShrubberyCreationForm(std::string const & Target)
{
    return (new ShrubberyCreationForm(Target));
}

Form * Intern::makePresidentialPardonForm(std::string const & Target)
{
    return (new PresidentialPardonForm(Target));
}

Form * Intern::makeRobotomyRequestForm(std::string const & Target)
{
    return (new RobotomyRequestForm(Target));
}