/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:19:15 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);
		void    robotomize(void) const;
		std::string _target;
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm( RobotomyRequestForm const & c);
		RobotomyRequestForm& operator=( RobotomyRequestForm const & c);
		~RobotomyRequestForm(void);
		std::string const &getTarget(void) const;
		void    execute(Bureaucrat const & executor) const;
};

#endif
