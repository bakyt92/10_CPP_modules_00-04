/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:32:18 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 14:34:41 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon *Weapon42;
        std::string name;
    public:
    HumanA(std::string _name, Weapon& _Weapon42);
    ~HumanA();
    void attack(void);
};

#endif