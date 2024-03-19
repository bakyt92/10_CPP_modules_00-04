/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:32:39 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 13:51:55 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string input);
    ~Weapon();
    const std::string & getType(void) const;
    void setType(std::string input);
};




#endif