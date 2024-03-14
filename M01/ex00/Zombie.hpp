/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 00:28:27 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/15 00:37:21 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ZOMBIE
#define H_ZOMBIE

#include <string>
#include <iostream>

class Zombie
{
    private:
        void announce (void);
        std::string name;
        Zombie();
        ~Zombie();

    public:
        Zombie* newZombie( std::string name );
        void randomChump( std::string name );
};

#endif