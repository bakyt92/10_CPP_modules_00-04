/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:57:16 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/17 21:24:45 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void print_data(std::string str, std::string *stringPTR, std::string &stringREF)
{
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    return;
}

void print_address(std::string str, std::string *stringPTR, std::string &stringREF)
{
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    return;
}

int main (void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = NULL;
    stringPTR = &str;
    std::string &stringREF = str;
    print_data(str, stringPTR, stringREF);
    print_address(str, stringPTR, stringREF);
    return 0;
}