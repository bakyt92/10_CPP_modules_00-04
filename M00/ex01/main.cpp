/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:50:21 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/15 00:08:06 by ufitzhug         ###   ########.fr       */
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

  
int main (void)
{
    std::string input;
    Phonebook Obj;
    while (input != "EXIT")
    {
        Obj.welcome();
        input = Obj.read_input();  
        if (input == "ADD")
        {
            Obj.set_data(Obj.get_size_list());
        }
        else if (input == "SEARCH")
        {
            Obj.PrintData(Obj.get_size_list());
        }
        else if (input == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << input;
        }
    }
    return (0);
}