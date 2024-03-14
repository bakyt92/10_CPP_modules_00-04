/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:38:35 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/14 20:49:37 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"


Phonebook::Phonebook(int x)
{
    size_list = x;
    set_flag(0);
}

Phonebook::~Phonebook()
{
}


bool Phonebook::welcome()
{
    std::cout << "Enter command (ADD / SEARCH / EXIT)" << std::endl;
    return 0;
}

std::string Phonebook::read_input(void)
{
    std::string input = "";
    std::cin >> input;
    if (std::cin.eof())
        return ("EXIT");
    else if (input == "EXIT")
        return "EXIT";
    else if (input == "ADD")
        return "ADD";
    else if (input == "SEARCH")
        return "SEARCH";
    else
        return "Wrong line. Enter command again \n";
}

void Phonebook::set_data(int index)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;
    std::cout << "Enter your data in following fields (5 lines): ";
    std::cout << "First name, Last name, Nickname, Phone No, Darkest Secret" << std::endl;
    std::cout << "Enter First Name: "; 
    std::getline (std::cin, first_name, '\n');
    std::getline (std::cin, first_name, '\n');
    std::cout << "Enter Last Name: ";
    std::getline (std::cin, last_name, '\n');
    std::cout << "Enter Nickname: ";
    std::getline (std::cin, nickname, '\n');
    std::cout << "Enter Phone No: ";
    std::getline (std::cin, phone_number, '\n');
    std::cout << "Enter Darkest Secret: ";
    std::getline (std::cin, darkest_secret, '\n');
    A[index].set_data(first_name, last_name, nickname, darkest_secret, phone_number);
    return ;
}

void Phonebook::print_all_data(int index)
{
    std::string fn, ln, nick;
    std::cout << index << std::setfill ('.') << std::setw(10) << " | ";
    fn = A[index].get_first_name();
    ln = A[index].get_last_name();
    nick = A[index].get_nickname();
    StringConverter(fn, ln, nick);
    std::cout << std::setw(10) << std::setfill ('.') << fn << std::setfill ('.') << " | ";
    std::cout << std::setw(10) << std::setfill ('.') << ln << std::setfill ('.') << " | ";
    std::cout << std::setw(10) << std::setfill ('.') << nick << std::setfill ('.') << " | ";
    std::cout << std::endl;
}
