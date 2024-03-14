/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:54:33 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/14 21:10:21 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact()
{
}


Contact::~Contact()
{
}

const std::string Contact::get_first_name(void)
{
    return first_name;
}

const std::string Contact::get_last_name(void)
{
    return last_name;
}

const std::string Contact::get_nickname(void)
{
    return nickname;
}

const std::string Contact::get_darkest_secret(void)
{
    return darkest_secret;
}

const std::string Contact::get_phone_number(void)
{
    return phone_number;
}

void Contact::set_data(std::string& fn, std::string& ln, std::string& nick, std::string& secret, std::string& num)
{
    first_name = fn;
    last_name = ln;
    nickname = nick;
    darkest_secret = secret;
    phone_number = num;
    return ;
}