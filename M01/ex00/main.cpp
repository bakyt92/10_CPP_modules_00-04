/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:28:32 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/16 18:45:05 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie Foo("Foo");
    newZombie("General_Zombie");
    Zombie *Z = randomChump("Chump");
    delete [] Z;
    return 0;
}