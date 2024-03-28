/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:01:09 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/27 19:55:36 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name), HitPoints(100), 
// !!!!УТОЧНИТЬ ПОЧЕМУ ХИТПОИНТС НЕ РАБОТАЮТ ТАКИМ СПОБОСОМ
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDmg = 20;
    std::cout << "ScavTrap constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{

}


//https://stackoverflow.com/questions/18479295/member-initializer-does-not-name-a-non-static-data-member-or-base-class
// https://en.cppreference.com/w/cpp/language/data_members 