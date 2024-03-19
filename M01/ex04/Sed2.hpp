/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed2.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:43 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 20:34:18 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED2_HPP
#define SED2_HPP

#include <iostream>
#include <string>
#include <fstream>

class Sed2
{
    private:
        std::string address;
        std::string s1;
        std::string s2;
    public:
        Sed2(char* adr, char* str1, char* str2);
        const std::string& getAddress() const;
        const std::string& getS1() const;
        const std::string& getS2() const;
        void ft_replace(void);
        ~Sed2();
};


#endif