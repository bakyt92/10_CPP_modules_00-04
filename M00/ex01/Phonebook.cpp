/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:38:35 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/13 14:40:56 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Phonebook.hpp"
// #include "./Contact.hpp"


void Print_Data(Phonebook &Obj)
{
    int index = 0;
    std::cout << "Input if No of contact (1-8): ";
    std::cin >> index;
    std::cout << "Print Data" << std::endl;
    std::cout << "Data_name: " << Obj.A[index].get_first_name() << " Data_family name: " << Obj.A[index].get_last_name() << std::endl;
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
    std::cin >> first_name >> last_name >> nickname >> phone_number >> darkest_secret;
    Obj.A[index].set_data(first_name, last_name, nickname, darkest_secret, phone_number);
    return ;
}

int main (void)
{
    std::string input;
    Phonebook Obj;
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
            Print_Data(Obj);
        }
        else if (input == "EXIT")
        {
            break;
        }
        else 
        {
            std::cout << "Wrong command. Enter new command" << std::endl;
        }
        if (index == 3)
            index = 0;
    }
    return (0);
}