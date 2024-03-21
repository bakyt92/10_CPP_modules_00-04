/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:29:53 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/21 18:55:08 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    int i = 0;
    std::string name;
    std::cout << "Please enter names of Zombies in Horde" << std::endl;
    std::getline(std::cin, name, '\n');   
    if (!std::cin.good() || name.empty())
        {
            std::cout << "Wrong input. Exit from program." << std::endl;
            return 1;
        }
    std::cout << "Please enter quantity of Zombies in Horde" << std::endl;
    std::cin >> i;
    if (!std::cin.good())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Wrong input. Exit from program." << std::endl;
            return 1;
        }
    Zombie* Horde; 
    Horde = zombieHorde(i, name);
    delete [] Horde;
    return 0;
}