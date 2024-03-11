/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:54:27 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/11 18:54:39 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <./Phonebook.hpp>
#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;

    public:
        const std::string get_first_name(void)
            return first_name;

        const std::string get_last_name(void)
            return last_name;
        
        const std::string get_nickname(void)
            return nickname;
        
        const std::string get_darkest_secret(void)
            return darkest_secret;
        
        const std::string get_phone_number(void)
            return phone_number;

        void set_data(std::string& fn, std::string& ln, std::string& nick, std::string& secret, std::string& num)
        {
            first_name = fn;
            last_name = ln;
            nickname = nick;
            darkest_secret = secret;
            phone_number = num;
            return ;
        }
}