/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:00:32 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/27 18:18:56 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap A("Berlin");
    ClapTrap B(A);
    A.attack("Momo");
    A.takeDamage(5);
    A.beRepaired(3);
    return 0;
}