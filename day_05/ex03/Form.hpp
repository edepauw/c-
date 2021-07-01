/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:18:54 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string _name, int const _execgrade, int	const _signgrade);
		Form(Form const &instance);
		~Form(void);
		struct GradeTooHighException : public std::exception
		{
			const char * what() const throw ()
			{
				return("Too High grade on form!");
			}
		};
		struct GradeTooLowException : public std::exception
		{
			const char * what() const throw ()
			{
				return("Too Low grade on form!");
			}
		};
		struct TooLowBGrade : public std::exception
		{
			const char * what() const throw ()
			{
				return("Too Low grade of Bureaucrat!");
			}
		};
		Form		&operator=(Form const &rhs);
		std::string const &getName() const;
		bool		isSigned() const;
		void		beSigned(Bureaucrat &brc);
		int			getExecGrade() const;
		int			getSignGrade() const;
		virtual void		execute(Bureaucrat const & executor) const = 0;;
	protected:
		std::string const _name;
		bool		_signed;
		int	const	_execgrade;
		int	const	_signgrade;

};
std::ostream &operator<<(std::ostream & os, Form const &f);
#endif
