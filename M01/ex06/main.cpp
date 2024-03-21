/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:37:22 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/21 19:37:25 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
    std::string input;
    Harl _harl;
    std::cout << "Hi, it is Harl" << std::endl;
    std::cout << "You can enter the level (without brackets) [WARNING], [ERROR], [DEBUG], [INFO] or enter [EXIT]" << std::endl;
    while (input.compare("EXIT") != 0)
    {
        std::cout << "Enter the level or [EXIT]: " << std::endl;
        std::getline(std::cin, input, '\n');
        if (!std::cin.good() || input == "EXIT")
            break;
        else
            _harl.complain(input);
    }
    return 0;
}