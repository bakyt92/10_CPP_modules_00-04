/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:32:14 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/18 20:04:23 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(/* args */)
{
    Weapon HumanA;
    std::string str;
    this->name = "Human_A";
    std::cout << "Please, enter the type of weapon for " << name << std::endl;
    std::cin >> str;
    Weapon.setType(str);
}

void HumanA::attack(void)
{
    std::cout << HumanA.name << " attacks with their " << Weapon.getType() << std::endl;
}

HumanA::~HumanA(/* args */)
{
}