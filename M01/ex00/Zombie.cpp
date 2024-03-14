/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:28:46 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/15 00:36:20 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name1)
{
    this->name = name1;
}

void Zombie::announce(void)
{
    std::cout << "BraiiiiiiinnnzzzZ...";
    return ;
}