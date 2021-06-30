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
