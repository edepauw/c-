/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edepauw <edepauw@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 09:34:11 by edepauw           #+#    #+#             */
/*   Updated: 2021/06/11 15:29:38 by edepauw          ###   ########lyon.fr   */
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
    int len;
    std::string s2(av[3]);
    size_t found = 0;

    while (std::getline(ifs, line))
    {
        found = 0;
        len = 0;
        while (found < line.length())
        {
            found = line.find(s1, found + len);
            if(found == std::string::npos)
                break;
            else
                line.replace(found,  s1.length(),  s2);
            len = s2.length();
        }
        ofs << line << std::endl;
    }
}
//eof
//memestring