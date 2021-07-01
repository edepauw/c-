/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:17:14 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:53 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1 )
		throw TooHighException();
	if (grade > 150)
		throw TooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &instance) : _name(instance.getName()), _grade(instance.getGrade())
{

}

std::string const &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increment()
{
	if (_grade <= 1)
		throw TooHighException();
	return ;
}

void Bureaucrat::decrement()
{
	if (_grade >= 150)
		throw TooLowException();
	return ;
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	_grade = rhs.getGrade();
	return *this;
}

std::ostream &operator<<(std::ostream & os, Bureaucrat const &brc)
{
	os << brc.getName() << ", bureaucrat grade " << brc.getGrade() << "." << std::endl;
	return os;
}

Bureaucrat::~Bureaucrat(void)
{}
