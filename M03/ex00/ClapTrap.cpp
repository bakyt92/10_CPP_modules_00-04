/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:00:26 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/26 21:14:58 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name), HitPoints(10), EnergyPoints(10), AttackDmg(0)
{
    std::cout << "Constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is called" << std::endl;
}


