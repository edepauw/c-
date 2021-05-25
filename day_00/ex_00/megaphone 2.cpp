/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:49:39 by eliott            #+#    #+#             */
/*   Updated: 2020/07/16 16:54:27 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>       // std::cout
#include <string>         // std::string
#include <locale>         // std::locale, std::toupper

int main (int ac, char **av)
{
	int a = 1;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	std::locale loc;
	while (a < ac)
	{
		std::string str = av[a];
		for (std::string::size_type i=0; i<str.length(); ++i)
			std::cout << std::toupper(str[i],loc);
		a++;
	}
	std::cout << std::endl;
	return 0;
}
