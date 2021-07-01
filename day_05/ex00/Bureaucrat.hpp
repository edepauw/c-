/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:17:18 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
class Form;

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &instance);
		int getGrade() const;
		void decrement();
		void signForm(Form *src);
		void increment();
		std::string const &getName() const;
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat(void);
		struct TooHighException : public std::exception
		{
			const char * what() const throw ()
			{
				return("Too High grade!");
			}
		};
		struct TooLowException : public std::exception
		{
			const char * what() const throw ()
			{
				return("Too Low grade!");
			}
		};
	private:
		std::string const	_name;
		u_int					_grade;
};
std::ostream &operator<<(std::ostream & os, Bureaucrat const &brc);

#endif
