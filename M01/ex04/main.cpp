/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:29 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 16:27:13 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed2.hpp"

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "ERROR. Wrong number of arguments." << std::endl;
        return 1;
    }
    Sed2 Sed;
    std::string address;
    address = Sed.CopyInput(argv[1]);
    std::ifstream ifs;
    ifs.open(address, std::ifstream::in);
    std::string buffer;
    while (ifs.good())
    {
        ifs.getline(buffer, 1024);
        
    }
    
    
    stargv[2]
    return 0;
}
