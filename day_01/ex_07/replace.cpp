/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 09:34:11 by edepauw           #+#    #+#             */
/*   Updated: 2021/05/27 12:21:18 by edepauw          ###   ########lyon.fr   */
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
    size_t found = 0;

    while (std::getline(ifs, line))
    {
    
        while (found < line.length())
        {
            found = line.find(s1);
            std::cout << line.length() << std::endl;
            if (found != std::string::npos)
            {
                line.replace(found,  s1.length(),  s2);
                line = line.substr(found + s2.length(), line.length());
                std::cout << line << std::endl;
            }
        }
        found = 0;
        ofs << line << std::endl;
    }
}
//eof
//memestring