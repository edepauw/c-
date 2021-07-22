/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 08:48:20 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/15 08:42:21 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void		displayInt( int i )
{
	std::cout << i << " ";
}

int			main(void)
{
	std::set<int> myset;
	int find1 = 30;
	int find2 = 33;

	for(int i = 0; i <= 5; i++)
		myset.insert(i * 10);
	std::cout << "MySet : ";
	for_each(myset.begin(), myset.end(), displayInt);
	std::cout << std::endl;
	try
	{
		std::cout << "Find : " << easyfind(myset, find1) << std::endl;
	}
	catch(std::string str)
	{
		std::cerr << str << std::endl;
	}
	try
	{
		std::cout << "Find2 : " << easyfind(myset, find2) << std::endl;
	}
	catch(std::string str)
	{
		std::cerr << str << std::endl;
	}
}
