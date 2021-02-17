/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:41:00 by eliott            #+#    #+#             */
/*   Updated: 2020/07/24 10:01:29 by eliott           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

Account::Account(char *name, int height, int age, char *color, char *gender): name(name), height(height), age(age), color(color), gender(gender)
{
}

Account::~Account( void )
{
	std::cout << this->name << "just died.";
}

