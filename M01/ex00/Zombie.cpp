/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:28:46 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/16 18:30:57 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name1) : name(name1)
{
    this->name = name1;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...";
    return ;
}


Zombie::~Zombie() { }