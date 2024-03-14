/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:50:21 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/14 21:16:12 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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
    
    if (Obj.get_flag() == 1)
        i = 8;
    while (index < i)
    {
        Obj.print_all_data(index);
        index++;
    }
    while (1)
    {
        std::cout << "To see detailed info pour contacts, enter index No: ";
        int x;
        std::cin >> x;
        if (x < i)
        {
            Obj.print_one_cont(x);
            return;
        }
        else
        {
            std::cout << "This contact does not exist. Please enter Index of contact one more time" << std::endl;
        }
    }
    return;
}

  
int main (void)
{
    std::string input;
    Phonebook Obj(0);
    int index = 0;
    while (input != "EXIT")
    {
        Obj.welcome();
        input = Obj.read_input();  
        if (input == "ADD")
        {
            Obj.set_data(index);
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
            std::cout << input;
        }
        if (index == 8)
            {
                index = 0;
                Obj.set_flag(1);
            }
    }
    return (0);
}