/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:39 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 21:46:21 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed2.hpp"

Sed2::Sed2(char* adr, char* str1, char* str2) 
    : address(adr), s1(str1), s2(str2)
{
}

const std::string& Sed2::getAddress() const
{
    return (this->address);
}

const std::string& Sed2::getS1() const
{
    return (this->s1);
}

const std::string& Sed2::getS2() const
{
    return (this->s2);
}

void Sed2::ft_replace(void)
{
    std::ifstream ifs(this->address.c_str());
    std::string buffer;
    while (ifs.good() && ifs.is_open())
    {
        std::getline(ifs, buffer, '\0');
        int i = 0;
        while (buffer.find(this->s1, 0) != std::string::npos)
        {
            i = buffer.find(this->s1, i);
            buffer.erase(i, s1.size());
            buffer.insert(i, getS2());
        }
        std::string res = address + ".replace";
        std::ofstream ofs(std::string(address + ".replace").c_str()); // check if it is working
        ofs << buffer;
        ofs.close();
    }
    ifs.close();
    return ;
}

Sed2::~Sed2()
{

}