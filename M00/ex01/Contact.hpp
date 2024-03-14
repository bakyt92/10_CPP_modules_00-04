/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:54:27 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/14 21:09:40 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "./Phonebook.hpp"

#ifndef H_CONTACT
#define H_CONTACT

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;

    public:
        Contact();
        ~Contact();
        const std::string get_first_name(void);
        const std::string get_last_name(void);
        const std::string get_nickname(void);
        const std::string get_darkest_secret(void);
        const std::string get_phone_number(void);
        void set_data(std::string& fn, std::string& ln, std::string& nick, 
        std::string& secret, std::string& num);
};

#endif

// include guards https://en.wikipedia.org/wiki/Include_guard 