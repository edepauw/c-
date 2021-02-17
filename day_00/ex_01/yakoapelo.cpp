/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yakoapelo.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 19:13:11 by eliott            #+#    #+#             */
/*   Updated: 2021/02/16 10:25:08 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.class.hpp"
void printinfo(void)
{
	std::cout << "Bonjour, bienvenue sur le nouveau carnet d'addresse electronique qui va faire de l'ombre a toutes les plus grandes marque carnet physique" << std::endl;
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
	while (instances[i].is_filled)
	{
		std::cout << "|    " << i << "     |";
		// std::cout << instances[i].firstName.substr(0,9);
		if (instances[i].firstName.length() >= 9 && instances[i].firstName.back() != ' ')
			std::cout << instances[i].firstName.substr(0,9) << ".|";
		else{
			while (instances[i].firstName.length() < 10)
				instances[i].firstName.insert(instances[i].firstName.length(), " ");
			std::cout << instances[i].firstName << "|";
		}
		if (instances[i].lastName.length() >= 9 && instances[i].lastName.back() != ' ')
			std::cout << instances[i].lastName.substr(0,9) << ".|";
		else{
			while (instances[i].lastName.length() < 10)
				instances[i].lastName.insert(instances[i].lastName.length(), " ");
			std::cout << instances[i].lastName << "|";
		}
		if (instances[i].login.length() >= 9 && instances[i].login.back() != ' ')
			std::cout << instances[i].login.substr(0,9) << ".|";
		else{
			while (instances[i].login.length() < 10)
				instances[i].login.insert(instances[i].login.length(), " ");
			std::cout << instances[i].login << "|";
		}
		std::cout << std::endl;
		i++;
	}
	std::cout << "Type the index of the desired contact:";
	std::cin >> usr;
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
	Contact	instances[7];
	int ret = 4;
	int i = 0;

	std::string userstr;
	printinfo();
	while (ret != 0 )
	{
		std::cin >> userstr;
		ret = choose(userstr);
		if( ret == 1 && i > 7){
			std::cout << "The maximum contact is reached!" << std::endl;
		}
		if( ret == 1 && i <= 7){
			instances[i].fill();
			i++;
		}
		if( ret == 2)
			searchusr(instances);
	}
	return 0;
}
