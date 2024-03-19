/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:32:35 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 13:51:32 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string input)
{
    setType(input);
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
