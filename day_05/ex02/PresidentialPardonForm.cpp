#include "PresidentialPardonForm.hpp"
PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 5, 25), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & c) : Form(c.getName(), c.getExecGrade(), c.getSignGrade())
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & c)
{
    (void)c;
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

std::string const &PresidentialPardonForm::getTarget(void) const
{
    return _target;
}

void    PresidentialPardonForm::pardon(void) const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(isSigned())
    {
		if (executor.getGrade() < getExecGrade())
            pardon();
        else
	    	throw TooLowBGrade();
    }
    else
        std::cout << getName() << " is not signed!"<< std::endl;
}