/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:30:02 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/17 19:46:08 by ufitzhug         ###   ########.fr       */
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
        Zombie();
        ~Zombie();
        void SetName (std::string name1);
        void announce (void);
        const std::string &GetName(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif