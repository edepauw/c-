/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 08:25:25 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/30 10:00:15 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <set>
#include <algorithm>

template< typename T >
int		easyfind( T & src, int i )
{
	typename T::const_iterator it;
	it = std::find(src.begin(), src.end(), i);
	if (it == src.end())
		throw (std::string("Not found in MySet"));
	return *it;
}

#endif
