/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:00:29 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/27 17:49:52 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int HitPoints;
        int EnergyPoints;
        int AttackDmg;
    public:
        ClapTrap(std::string _name);
        ~ClapTrap();
        ClapTrap(const ClapTrap & src);
        ClapTrap & operator=(const ClapTrap & rhs);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif