/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:32:35 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/18 19:56:24 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void) const
{
    return (type);
}

void Weapon::setType(std::string input)
{
    this->type = input; 
}
