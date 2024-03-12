/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:54:38 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/12 17:18:14 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
// #include "./Phonebook.hpp"
#include "./Contact.hpp"

class Phonebook
{
    public:
        Contact A[8];
        class Contact get_contact(int index)
        {
            return A[index];
        }
        // void set_contact(int index)
        // {
        //     A[index].set_data(std::string fn, std::string ln, std::string nick, std::string secret, std::string num);
        //     return ;
        // }
};