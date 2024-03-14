/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:38:35 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/15 00:10:58 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"


Phonebook::Phonebook()
{
    set_size_list(0);
    set_flag(0);
}

Phonebook::~Phonebook()
{
}


bool Phonebook::welcome()
{
    std::cout << "Enter command (ADD / SEARCH / EXIT)" << "\n";
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
    {
        if (std::cin.fail())
            std::cin.clear();
        return "Wrong line. Enter command again \n";
    }
}

void Phonebook::set_data(int index)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;
    std::cout << "Enter your data in following fields (5 lines): ";
    std::cout << "First name, Last name, Nickname, Phone No, Darkest Secret" << "\n";
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
    index++;
    set_size_list(index);
    if (get_size_list() == 8)
    {
        set_size_list(0);
        set_flag(1);
    }
    return ;
}

void Phonebook::print_all_data(int index)
{
    std::string fn, ln, nick;
    std::cout << std::setw(10) << index << std::setfill ('.') << " | ";
    fn = A[index].get_first_name();
    ln = A[index].get_last_name();
    nick = A[index].get_nickname();
    StringConverter(fn, ln, nick);
    std::cout << std::setw(10) << std::setfill ('.') << fn << std::setfill ('.') << " | ";
    std::cout << std::setw(10) << std::setfill ('.') << ln << std::setfill ('.') << " | ";
    std::cout << std::setw(10) << std::setfill ('.') << nick << std::setfill ('.') << " | ";
    std::cout << "\n";
    return ;
}

void Phonebook::print_one_cont(int index)
{
    std::cout << "Information per user index" << index << "is printing.." << "\n";
    std::cout << "First name:" << A[index].get_first_name() << "\n";
    std::cout << "Last name:"<< A[index].get_last_name() << "\n";
    std::cout << "Nickname:"<< A[index].get_nickname() << "\n";
    std::cout << "Phone number:"<< A[index].get_phone_number() << "\n";
    std::cout << "Secret:"<< A[index].get_darkest_secret() << "\n";
    return ;
}

bool Phonebook::ft_check(void)
{
    if (flag == 0 && size_list == 0)
        return 1;
    else
        return 0;
}

void Phonebook::PrintData(int i)
{
    if (ft_check() == 1)
        {
            std::cout << "List of contacts does not exist" << "\n";
            return ;
        }
    std::cout << std::setw(10) << std::setfill ('.') << "Index" << " | ";
    std::cout << std::setw(10) << std::setfill ('.') << "First name" << " | ";
    std::cout << std::setw(10) << std::setfill ('.') << "Last name"<< " | ";
    std::cout << std::setw(10) << std::setfill ('.') << "Nickname" << " | ";
    std::cout << "\n";
    int index = 0;
    if (get_flag() == 1)
        i = 8;
    while (index < i)
    {
        print_all_data(index);
        index++;
    }
    while (1)
    {
        std::cout << "To see detailed info pour contacts, enter index No: ";
        int x;
        std::cin >> x;
        // std::cin.ignore(std::numeric_limits<int>::max(), '\n');
        if (x <= i && x >= 0 && std::cin.good())
        {
            print_one_cont(x);
            return;
        }
        else
        {
            if (std::cin.fail())
                std::cin.clear();
            std::cout << "This contact does not exist." << "\n";
            return;
        }
    }
    return;
}