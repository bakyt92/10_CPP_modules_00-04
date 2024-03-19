/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:29 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 20:37:14 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed2.hpp"

bool ft_check_input (char **argv)
{
    int i = 1;
    while (i < 4)
    {
        if (argv[i])
            i++;
        else 
            return 1;
    }
    return 0;
}

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "ERROR. Wrong number of arguments." << std::endl;
        return 1;
    }
    if (ft_check_input(argv) == 1)
    {
        std::cout << "ERROR. Wrong input." << std::endl;
        return 1;
    }
    Sed2 Obj(argv[1], argv[2], argv[3]);
    // ifs.open(Obj.getAddress(), std::ifstream::in);
    
    
    return 0;
}
