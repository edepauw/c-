/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:19:13 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 45, 72), _target(target)
{
    srand(time(NULL));

}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & c) : Form(c.getName(), c.getExecGrade(), c.getSignGrade())
{
    _target = c.getTarget();
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & c)
{
    (void)c;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

std::string const &RobotomyRequestForm::getTarget(void) const
{
    return _target;
}

void    RobotomyRequestForm::robotomize(void) const
{
    if ((rand() % 2) - 1)
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    else
        std::cout << getTarget() << " robotization has failed." << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if(isSigned())
    {
		if (executor.getGrade() < getExecGrade())
            robotomize();
        else
	    	throw TooLowBGrade();
    }
    else
        std::cout << getName() << " is not signed!"<< std::endl;
}