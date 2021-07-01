/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:19:18 by edepauw           #+#    #+#             */
/*   Updated: 2021/07/01 13:19:31 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyCreationForm", 137, 145), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & c) : Form(c.getName(), c.getExecGrade(), c.getSignGrade()), _target(c.getTarget())
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & c)
{
    (void)c;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

std::string const &ShrubberyCreationForm::getTarget(void) const
{
    return _target;
}

void    ShrubberyCreationForm::createShrubbery(void) const
{
    std::string s;
    s = getTarget() + "_shrubbery";
    std::ofstream ofs(s);
    ofs << "                                              .    " << std::endl;
    ofs << "                                   .         ;     " << std::endl;
    ofs << "      .              .              ;%     ;;      " << std::endl;
    ofs << "        ,           ,                :;%  %;       " << std::endl;
    ofs << "         :         ;                   :;%;'     .," << std::endl;
    ofs << ",.        %;     %;            ;        %;'    ,;  " << std::endl;
    ofs << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'   " << std::endl;
    ofs << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'    " << std::endl;
    ofs << "    ;%;      %;        ;%;        % ;%;  ,%;'      " << std::endl;
    ofs << "     `%;.     ;%;     %;'         `;%%;.%;'        " << std::endl;
    ofs << "      `:;%.    ;%%. %@;        %; ;@%;%'           " << std::endl;
    ofs << "         `:%;.  :;bd%;          %;@%;'             " << std::endl;
    ofs << "           `@%:.  :;%.         ;@@%;'              " << std::endl;
    ofs << "             `@%.  `;@%.      ;@@%;                " << std::endl;
    ofs << "               `@%%. `@%%    ;@@%;                 " << std::endl;
    ofs << "                 ;@%. :@%%  %@@%;                  " << std::endl;
    ofs << "                   %@bd%%%bd%%:;                   " << std::endl;
    ofs << "                     #@%%%%%:;;                    " << std::endl;
    ofs << "                     %@@%%%::;                     " << std::endl;
    ofs << "                     %@@@%(o);  . '                " << std::endl;
    ofs << "                     %@@@o%;:(.,'                  " << std::endl;
    ofs << "                 `.. %@@@o%::;                     " << std::endl;
    ofs << "                    `)@@@o%::;                     " << std::endl;
    ofs << "                     %@@(o)::;                     " << std::endl;
    ofs << "                    .%@@@@%::;                     " << std::endl;
    ofs << "                    ;%@@@@%::;.                    " << std::endl;
    ofs << "                   ;%@@@@%%:;;;.                   " << std::endl;
    ofs << "               ...;%@@@@@%%:;;;;,..                " << std::endl;   
    ofs.close();
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(isSigned())
    {
		if (executor.getGrade() < getExecGrade())
            createShrubbery();
        else    
		    throw TooLowBGrade();
    }
    else
        std::cout << getName() << " is not signed!"<< std::endl;
}