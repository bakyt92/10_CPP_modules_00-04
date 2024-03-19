/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed2.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:43 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 16:41:40 by ufitzhug         ###   ########.fr       */
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
        std::string s1;
        std::string s2;
        std::string address;
    public:
        std::string CopyInput (char *input);
        
};


#endif