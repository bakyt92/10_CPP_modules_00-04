/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:00:26 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/27 18:11:16 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : name(_name), HitPoints(10), EnergyPoints(10), AttackDmg(0)
{
    std::cout << "Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap & rhs)
{
    std::cout << "Copy assignment operator called." << std::endl;
    if (this != &rhs)
        {
            this->name = rhs.name;
            this->EnergyPoints = rhs.EnergyPoints;
            this->HitPoints = rhs.EnergyPoints;
            this->AttackDmg = rhs.AttackDmg;
        }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints < 1)
    {
        std::cout << "ClapTrap has 0 Hit Points. ClapTrap can't attack." << std::endl;
        return;
    }
    if (EnergyPoints < 1)
    {
        std::cout << "ClapTrap has 0 Energy Points. ClapTrap can't attack." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " attacks " 
        << target << ", causing " << AttackDmg << " points of damage." << std::endl;
    EnergyPoints--;
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints < 1)
    {
        std::cout << "ClapTrap has 0 Hit Points. ClapTrap can't be repaired." << std::endl;
        return;
    }
    if (EnergyPoints < 1)
    {
        std::cout << "ClapTrap has 0 Energy Points. ClapTrap can't be repaired." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << name << " is repaired by " 
        << amount << " Hit points"  << std::endl;
    HitPoints += amount;
    EnergyPoints--;
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (HitPoints < 1)
    {
        std::cout << "ClapTrap has 0 Hit Points. No damage is taken by ClapTrap." << std::endl;
        return;
    }
    HitPoints -= amount;
    return;
}