/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:39:39 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/19 16:25:51 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed2.hpp"

std::string Sed2::CopyInput (char *input)
{
    std::string res;
    int i = 0;
    while (input[i])
    {
        res[i] = input[i];
        i++;
    }
    res[i] = '\0';
    return res;
}