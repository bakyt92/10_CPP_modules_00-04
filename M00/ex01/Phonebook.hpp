/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:54:38 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/12 16:23:04 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <./Contact.hpp>

class Phonebook
{
    private:
        Contact A[8];

    public:
        class Contact get_contact(int index)
        {
            return A[index];
        }
        class Contact set_contact(int index)
        {
            A[index].(std::string& fn, std::string& ln, std::string& nick, std::string& secret, std::string& num);
        }
}