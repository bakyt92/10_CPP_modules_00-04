/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:32:25 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 14:33:15 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
        HumanB();
        Weapon *Weapon42;
        std::string name;
    public:
    HumanB(std::string name);
    void setWeapon(Weapon& _Weapon42);
    void attack(void);
    ~HumanB();

};

#endif