/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:31:23 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/06 20:31:53 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        int i = 1;
        char c;
        while (argc > i)
        {
            int j = 0;
            while (argv[i][j] != '\0')
            {
                c = toupper(argv[i][j]);
                std::cout << c;
                j++;
            }
            std::cout << ' ';
            i++;
        }
    }
}