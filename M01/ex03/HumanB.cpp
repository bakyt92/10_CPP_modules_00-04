/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:32:21 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 15:47:00 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// *ADD check of input of Class WEAPON

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
    this->Weapon42 = NULL;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << Weapon42->getType() << std::endl;
}

void HumanB::setWeapon(Weapon* _Weapon42)
{
    Weapon42 = _Weapon42;
}

HumanB::~HumanB(/* args */)
{
}