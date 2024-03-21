/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:03:31 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/21 15:51:14 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed (const Fixed &src)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called." << std::endl; 
    
}

Fixed 

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}