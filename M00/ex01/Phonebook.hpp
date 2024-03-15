/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:54:38 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/15 17:30:25 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_PHONEBOOK
#define H_PHONEBOOK

#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include "./Contact.hpp"

class Phonebook
{
    private: 
        int size_list;
        bool flag;
        Contact A[8];
    public:
        Phonebook();
        ~Phonebook();
        const Contact& get_contact(int index) const;
        const int& get_size_list() const;
        void set_size_list(int x);     
        const bool& get_flag() const;
        void set_flag(bool x);
        std::string read_input(void);
        bool welcome(void);
        void set_data(int index);
        void print_all_data(int index);
        void print_one_cont(int index);
        bool ft_check(void);
        void PrintData(int i);
        void StringConverter(std::string &fn, std::string &ln, std::string &nick);
};

#endif

// include guard optimisation 
// https://web.archive.org/web/20100819052043/http://www.bobarcher.org/software/include/index.html