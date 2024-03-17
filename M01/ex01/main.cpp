/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:29:53 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/17 19:51:10 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    int i = 0;
    std::string name;
    std::cout << "Please enter names of Zombies in Horde" << std::endl;
    std::cin >> name;
    std::cout << "Please enter quantity of Zombies in Horde" << std::endl;
    std::cin >> i;
    Zombie* Horde; 
    Horde = zombieHorde(i, name);
    delete [] Horde;
    return 0;
}