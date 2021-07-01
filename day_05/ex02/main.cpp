/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:18:02 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "__________________too low Exception_______________________" << std::endl;
	{
		try{
			Bureaucrat bob("Bob", 153);
		}
		catch (Bureaucrat::TooLowException& e)
		{
			std::cout << "Too Low" << std::endl;
		}
		catch (Bureaucrat::TooHighException& e)
		{
			std::cout << "Too High" << std::endl;
		}
	}
	std::cout << "__________________too high Exception_______________________" << std::endl;
	{
		try{
			Bureaucrat bob("Bob", 0);
		}
		catch (Bureaucrat::TooLowException& e)
		{
			std::cout << "Too Low" << std::endl;
		}
		catch (Bureaucrat::TooHighException& e)
		{
			std::cout << "Too High" << std::endl;
		}
	}
	std::cout << "____________________no exception_____________________" << std::endl;
	{
		try{
			Bureaucrat bob("Bob", 1);
			Bureaucrat jim("Jim", 50);
			Bureaucrat dav("Dav", 150);
		}
		catch (Bureaucrat::TooLowException& e)
		{
			std::cout << "Too Low" << std::endl;
		}
		catch (Bureaucrat::TooHighException& e)
		{
			std::cout << "Too High" << std::endl;
		}
	}
	std::cout << "____________________ex_02_____________________" << std::endl;
	{
		try{
			Bureaucrat jim("President", 151);
			ShrubberyCreationForm	f("Jean Eude");
			RobotomyRequestForm	g("Bernard");
			PresidentialPardonForm	r("Donatian");
			jim.signForm(f);
			jim.executeForm(f);
			jim.signForm(g);
			jim.executeForm(g);
			jim.signForm(r);
			jim.executeForm(r);
		}
		catch (Bureaucrat::TooLowException& e)
		{
			std::cout << "Too Low" << std::endl;
		}
		catch (Bureaucrat::TooHighException& e)
		{
			std::cout << "Too High" << std::endl;
		}
	}
}
