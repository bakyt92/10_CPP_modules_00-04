/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:30:07 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/17 19:42:40 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    Zombie* ZombieHorde1 = new Zombie[N];
    while (i < N)
    {
       ZombieHorde1[i].SetName(name);
       ZombieHorde1[i].announce();
       i++;
    }
    return (ZombieHorde1);
}