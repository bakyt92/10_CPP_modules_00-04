/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:37:35 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/22 13:11:40 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

void    Harl::debug(void)
{
    std::string str = "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout << str << std::endl;
}

void    Harl::info(void)
{
    std::string str = "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << str << std::endl;
}

void    Harl::warning(void)
{
    std::string str = "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << str << std::endl;
}

void    Harl::error(void)
{
    std::string str = "ERROR: This is unacceptable! I want to speak to the manager now.";
    std::cout << str << std::endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*ptr1[]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    const char *cmd[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (cmd[i] == level)
            {
                break;
            }
        i++;
    }
    switch (i)
        {
            case 0: 
                (this->*ptr1[0])();
                (this->*ptr1[1])();
                (this->*ptr1[2])();
                (this->*ptr1[3])();
                break;
            case 1: 
                (this->*ptr1[1])();
                (this->*ptr1[2])();
                (this->*ptr1[3])();
                break;
            case 2: 
                (this->*ptr1[2])();
                (this->*ptr1[3])();
                break;
            case 3: 
                (this->*ptr1[3])();
                break;
            default:
                std::cout << "Probably complaining about insignificant problems" << std::endl;
                break;
        }
    return ;
}

Harl::~Harl()
{
}