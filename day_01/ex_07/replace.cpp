/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 09:34:11 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/18 12:31:57 by edepauw          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
        return (1);
    std::ifstream ifs(av[1]);
    std::stringstream filename;
    filename << av[1] << ".REPLACE";
    std::ofstream ofs(filename.str());
    std::string line;
    std::string s1(av[2]);
    std::string s2(av[3]);
    int found = 0;

    while (std::getline(ifs, line))
    {
        while (found < line.length() && line.length() != -1)
        {
            found = line.find(s1);
            if (found != -1)
                line.replace(found,  s1.length(),  s2);
        }
        found = 0;
        ofs << line << std::endl;
    }

}