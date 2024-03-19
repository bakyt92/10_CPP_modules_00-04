/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:32:14 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 15:30:46 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_Weapon42) 
    : name(_name), Weapon42(_Weapon42)
{
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << Weapon42.getType() << std::endl;
}

HumanA::~HumanA(/* args */)
{
}