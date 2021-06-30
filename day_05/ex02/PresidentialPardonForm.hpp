#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <iostream>


class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm(void);
		void pardon() const;
		std::string _target;
	public:
		PresidentialPardonForm(PresidentialPardonForm const & c);
		PresidentialPardonForm(std::string const &target);
		std::string const &getTarget(void) const;
		void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm& operator=( PresidentialPardonForm const & c);
		~PresidentialPardonForm(void);
};
#endif
