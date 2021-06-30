#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int const execgrade, int const signgrade) : _name(name), _signed(false), _execgrade(execgrade), _signgrade(signgrade)
{
	if(execgrade > 150 || signgrade > 150)
		throw Form::GradeTooLowException();
	if(execgrade < 1 || signgrade < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const &instance) : _name(instance._name), _signed(instance._signed), _execgrade(instance._execgrade), _signgrade(instance._signgrade)
{
	if(_execgrade > 150 || _signgrade > 150)
		throw Form::GradeTooLowException();
	if(_execgrade < 1 || _signgrade < 1)
		throw Form::GradeTooHighException();
}

Form::~Form(void)
{

}

void	Form::beSigned(Bureaucrat &brc)
{
	if(brc.getGrade() < getSignGrade())
		_signed = true;
	else
		throw TooLowBGrade();
}

Form		&Form::operator=(Form const &rhs)
{
	return *this;
}
std::ostream &operator<<(std::ostream & os, Form const &f)
{
	os << "Form : " << f.getName() << std::endl;
	os << "    Required sign grade : " << f.getSignGrade() << std::endl;
	os << "    Required exec grade : " << f.getExecGrade() << std::endl;
	os << "    is signed : " << f.isSigned() << std::endl;
	return os;
}

std::string const &Form::getName() const
{
	return _name;
}

bool		Form::isSigned() const
{
	return _signed;
}

int			Form::getExecGrade() const
{
	return _execgrade;
}

int			Form::getSignGrade() const
{
	return _signgrade;
}

void		Form::setSigned(bool &b)
{
	_signed = b;
}

