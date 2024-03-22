/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:45:59 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/22 15:59:24 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    fxvalue = 0;
}

Fixed::Fixed (const Fixed &src)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called." << std::endl;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called." << std::endl; 
    if (this != &rhs)
            this->fxvalue = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits (void) const
{
    std::cout << "getRawBits member function called." << std::endl; 
    return (this->fxvalue);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called." << std::endl; 
    fxvalue = raw;
    return ;
}
