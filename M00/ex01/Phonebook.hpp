/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:54:38 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/13 22:36:50 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_PHONEBOOK
#define H_PHONEBOOK

#include <string>
#include <iostream>
#include <iomanip>
#include "./Contact.hpp"

class Phonebook
{
    private: 
        int size_list;
    public:
        Phonebook(int x);
        ~Phonebook();
        Contact A[8];
        class Contact get_contact(int index)
        {
            return A[index];
        }
        int get_size_list()
        {
            return (size_list);
        }
        void set_size_list(int x)
        {
            size_list = x;
            return;
        }
        
        // void set_contact(int index)
        // {
        //     A[index].set_data(std::string fn, std::string ln, std::string nick, std::string secret, std::string num);
        //     return ;
        // }
};

#endif

// include guard optimisation 
// https://web.archive.org/web/20100819052043/http://www.bobarcher.org/software/include/index.html