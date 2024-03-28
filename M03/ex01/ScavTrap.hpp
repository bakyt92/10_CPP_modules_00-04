/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:01:12 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/27 18:55:44 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    ScavTrap();
public:
    ScavTrap(std::string _name);
    ~ScavTrap();
    ScavTrap(const ScavTrap & src);
    ScavTrap& operator= (const ScavTrap & rhs);
    void guardGate();
};

#endif