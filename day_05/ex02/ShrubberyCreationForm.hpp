/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:18:29 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm(void);
		void    createShrubbery(void) const;
		std::string _target;
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm( ShrubberyCreationForm const & c);
		ShrubberyCreationForm& operator=( ShrubberyCreationForm const & c);
		std::string const &getTarget(void) const;
		void    execute(Bureaucrat const & executor) const;
		~ShrubberyCreationForm(void);
};
#endif
