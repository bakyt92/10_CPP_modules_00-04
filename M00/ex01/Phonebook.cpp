/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:38:35 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/13 22:41:57 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"


Phonebook::Phonebook(int x)
{
    size_list = x;
}

Phonebook::~Phonebook()
{
}


void StringConverter(std::string &fn, std::string &ln, std::string &nick)
{
    if (fn.length() > 9)
    {
        fn = fn.substr(0, 9);
        fn.append(".");
    }
    if (ln.length() > 9)
    {
        ln = ln.substr(0, 9);
        ln.append(".");
    }
    if (nick.length() > 9)
    {
        nick = nick.substr(0, 9);
        nick.append(".");
    }
    return ;
}

void Print_Data(Phonebook &Obj, int i)
{
    std::cout << "List of contacts: " << std::endl;
    int index = 0;
    std::string fn, ln, nick;
    if (Obj.get_size_list() == 1)
        i = 8;
    while (index < i)
    {
        std::cout << index << std::setfill ('.') << std::setw(10) << " | ";
        fn = Obj.A[index].get_first_name();
        ln = Obj.A[index].get_last_name();
        nick = Obj.A[index].get_nickname();
        StringConverter(fn, ln, nick);
        std::cout << std::setw(10) << std::setfill ('.') << fn << std::setfill ('.') << " | ";
        std::cout << std::setw(10) << std::setfill ('.') << ln << std::setfill ('.') << " | ";
        std::cout << std::setw(10) << std::setfill ('.') << nick << std::setfill ('.') << " | ";
        std::cout << std::endl;
        index++;
    }
    while (1)
    {
        std::cout << "To see detailed info pour contacts, enter index No: ";
        int x;
        std::cin >> x;
        if (x <= i)
        {
            std::cout << Obj.A[x].get_first_name() << std::endl;
            std::cout << Obj.A[x].get_last_name() << std::endl;
            std::cout << Obj.A[x].get_nickname() << std::endl;
            std::cout << Obj.A[x].get_darkest_secret() << std::endl;
            std::cout << Obj.A[x].get_phone_number() << std::endl;
            break;
        }
        else
        {
            std::cout << "This contact does not exist. Please enter Index of contact one more time" << std::endl;
        }
    }
    return;
}

  
void Enter_Data(Phonebook &Obj, int index)
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
    std::cout << "Phone No: ";
    std::getline (std::cin, phone_number, '\n');
    std::cout << "Darkest Secret: ";
    std::getline (std::cin, darkest_secret, '\n');
    Obj.A[index].set_data(first_name, last_name, nickname, darkest_secret, phone_number);
    return ;
}

int main (void)
{
    std::string input;
    Phonebook Obj(0);
    int index = 0;
    while (1)
    {
        std::cout << "Enter command (ADD / SEARCH / EXIT)" << std::endl;
        std::cin >> input;
        if (input == "ADD")
        {
            Enter_Data(Obj, index);
            index++;
        }
        else if (input == "SEARCH")
        {
            Print_Data(Obj, index);
        }
        else if (input == "EXIT")
        {
            break;
        }
        else 
        {
            std::cout << "Wrong command. Enter new command" << std::endl;
        }
        if (index == 8)
            {
                index = 0;
                Obj.set_size_list(1);
            }
    }
    return (0);
}