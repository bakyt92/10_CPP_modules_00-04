/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:29:58 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/18 17:40:06 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " is dead..." << std::endl;
}

void Zombie::SetName(std::string name1)
{
    this->name = name1;
    return ;
}

void Zombie::announce(void)
{
    std::string name2 = GetName();
    std::cout << name2 << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

const std::string& Zombie::GetName(void) const
{
    return (name);
}