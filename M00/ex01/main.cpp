/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:50:21 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/15 17:29:22 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

 
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