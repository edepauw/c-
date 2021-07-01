/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:19:05 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// int main()
// {
// 	std::cout << "____________________no exception_____________________" << std::endl;
// 	{
// 		try{
// 			Bureaucrat bob("Bob", 1);
// 			Bureaucrat jim("Jim", 50);
// 			Bureaucrat dav("Dav", 150);
// 		}
// 		catch (Bureaucrat::TooLowException& e)
// 		{
// 			std::cout << "Too Low" << std::endl;
// 		}
// 		catch (Bureaucrat::TooHighException& e)
// 		{
// 			std::cout << "Too High" << std::endl;
// 		}
// 	}
// 	std::cout << "____________________ex_01_____________________" << std::endl;
// 	{
// 		try{
// 			Bureaucrat jim("President", 1);
// 			ShrubberyCreationForm	f("Jean Eude");
// 			RobotomyRequestForm	g("Bernard");
// 			PresidentialPardonForm	r("Donatian");
// 			// Form		*d = new Form("form2", 20, 20);
// 			jim.signForm(f);
// 			jim.executeForm(f);
// 			jim.signForm(g);
// 			jim.executeForm(g);
// 			jim.signForm(r);
// 			jim.executeForm(r);
// 		}
// 		catch (Bureaucrat::TooLowException& e)
// 		{
// 			std::cout << "Too Low" << std::endl;
// 		}
// 		catch (Bureaucrat::TooHighException& e)
// 		{
// 			std::cout << "Too High" << std::endl;
// 		}
// 	}
// }
int            main( void )
{
    srand(time(NULL));
    Bureaucrat Kevin("Kevin", 1);
    Intern someRandomIntern;
    Form* form1;
    Form* form2;
    Form* form3;
    Form* form4;
    try
    {
        form1 = someRandomIntern.makeForm("robotomy request", "Bender");
        if (!form1)
            throw std::invalid_argument("Form error");
        else
        {
            std::cout << *form1 << std::endl;
            form1->beSigned(Kevin);
            Kevin.executeForm(*form1);
        }
        std::cout << std::endl;
        form2 = someRandomIntern.makeForm("presidential pardon", "Bender");
        if (!form2)
            throw std::invalid_argument("Form error");
        else
        {
            std::cout << *form2 << std::endl;
            form2->beSigned(Kevin);
            Kevin.executeForm(*form2);
        }
        std::cout << std::endl;
        form3 = someRandomIntern.makeForm("shruberry creation", "Bender");
        if (!form3)
            throw std::invalid_argument("Form error");
        else
        {
            std::cout << *form3 << std::endl;
            form3->beSigned(Kevin);
            Kevin.executeForm(*form3);
        }
        std::cout << std::endl;
        form4 = someRandomIntern.makeForm("gneeee", "Bender");
        if (!form4)
            throw std::invalid_argument("Form error");
        else
        {
            std::cout << *form4 << std::endl;
            form4->beSigned(Kevin);
            Kevin.executeForm(*form4);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
