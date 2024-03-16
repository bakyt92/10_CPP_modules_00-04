/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:28:27 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/16 18:41:07 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ZOMBIE
#define H_ZOMBIE

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie();
        void announce (void);
};

Zombie* newZombie (std::string name);
void randomChump (std::string name);

#endif