/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:18:44 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
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

void Bureaucrat::executeForm(Form const & form)
{
	try {
		form.execute(*this);
	}
	catch (Form::TooLowBGrade())
	{
		std::cout << "too low for executing this Form!" << std::endl; 
	}
}

void Bureaucrat::increment()
{
	_grade++;
	if (_grade > 150)
		throw TooLowException();
	if (_grade < 1)
		throw TooHighException();
	return ;
}
void Bureaucrat::signForm(Form &src)
{
	try {
		src.beSigned(*this);
	}
	catch(Form::TooLowBGrade& e)
	{
		std::cout << getName() << " cannot sign " << src.getName() <<" because "<< e.what() <<std::endl;
		return ;
	}
		std::cout << getName() << " signs " << src.getName() << std::endl;
}

void Bureaucrat::decrement()
{
	_grade--;
	if (_grade > 150)
		throw TooLowException();
	if (_grade < 1)
		throw TooHighException();
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
