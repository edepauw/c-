/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 19:13:11 by eliott            #+#    #+#             */
/*   Updated: 2021/06/11 11:44:35 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.class.hpp"
int is_digit(std::string str)
{
	for(size_t i = 0; i < str.length(); i++)
	{
		if(!(std::isdigit(str[i])))
			return(0);
	}
	return(1);
}

void printinfo(void)
{
	std::cout << "Bonjour, bienvenue sur le nouveau carnet d'addresse electronique\nqui va faire de l'ombre a toutes les plus grandes marque de carnet physique" << std::endl;
	std::cout << "commandes possible:" << std::endl;
	std::cout << "    - ADD" << std::endl;
	std::cout << "    - SEARCH" << std::endl;
	std::cout << "    - EXIT" << std::endl;
}

void searchusr(Contact instances[7])
{
	int i;
	std::string usr;
	i = 0;
	std::cout << "|  index   |firstname | lastname |  login   |" << std::endl;
	while (instances[i].getif() == 1)
	{
		std::cout << "|    " << i << "     |";
		// std::cout << instances[i].firstName.substr(0,9);
		if (instances[i].getfName().length() >= 9 && instances[i].getfName().back() != ' ')
			std::cout << instances[i].getfName().substr(0,9) << ".|";
		else{
			while (instances[i].getfName().length() < 10)
				instances[i].getfName().insert(instances[i].getfName().length(), " ");
			std::cout << instances[i].getfName() << "|";
		}
		if (instances[i].getlName().length() >= 9 && instances[i].getlName().back() != ' ')
			std::cout << instances[i].getlName().substr(0,9) << ".|";
		else{
			while (instances[i].getlName().length() < 10)
				instances[i].getlName().insert(instances[i].getlName().length(), " ");
			std::cout << instances[i].getlName() << "|";
		}
		if (instances[i].getlogin().length() >= 9 && instances[i].getlogin().back() != ' ')
			std::cout << instances[i].getlogin().substr(0,9) << ".|";
		else{
			while (instances[i].getlogin().length() < 10)
				instances[i].getlogin().insert(instances[i].getlogin().length(), " ");
			std::cout << instances[i].getlogin() << "|";
		}
		std::cout << std::endl;
		i++;
	}
	std::cout << "Type the index of the desired contact:";
	std::getline(std::cin, usr);
	while (!(is_digit(usr)))
	{
		std::cout << "Only numbers are accepted!" << std::endl;
		std::cout << "Type the index of the desired contact:";
		std::getline(std::cin, usr);
	}
	if(instances[std::stoi(usr, nullptr, 10)].getif() == 1)
		instances[std::stoi(usr, nullptr, 10)].printContact();
}

int		choose(std::string userstr)
{
	if(userstr.compare("ADD") == 0)	return 1;
	if(userstr.compare("SEARCH")  == 0) return 2;
	if(userstr.compare("EXIT")  == 0) return 0;
	std::cout << "IDK, please try again but better than the last one!" << std::endl; return 3;
}

int		main(void)
{
	Contact	instances[8];
	int ret = 4;
	int i = 0;

	std::string userstr;
	printinfo();
	while (ret != 0 )
	{
		std::getline(std::cin , userstr);
		ret = choose(userstr);
		if( ret == 1 && i > 7){
			std::cout << "The maximum contact is reached!" << std::endl;
		}
		if( ret == 1 && i <= 7){
			instances[i].fill();
			i++;
		}
		if( ret == 2 )
			searchusr(instances);
	}
	return 0;
}
