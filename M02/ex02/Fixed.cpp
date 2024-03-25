/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:58:38 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/25 20:54:46 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    fxvalue = 0;
}

Fixed::Fixed(const int a) : fxvalue(a * (1 << nfb))
{
    std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float a) : fxvalue(roundf(a * (1 << nfb)))
{
    std::cout << "Float constructor called." << std::endl;
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
    return (this->fxvalue);
}

void Fixed::setRawBits( int const raw )
{
    fxvalue = raw;
    return ;
}

float Fixed::toFloat(void) const
{
    return ((float)fxvalue / (float)(1 << nfb));
}

int Fixed::toInt(void) const
{
    return (fxvalue >> nfb);
}

std::ostream& operator<< (std::ostream &out, const Fixed &a)
{
    out << a.toFloat();
    return out;
}

// COMPARISON 6 operators //

bool Fixed::operator== (const Fixed &rhs)
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!= (const Fixed &rhs)
{
    return (this->getRawBits() != rhs.getRawBits());
}

bool Fixed::operator> (const Fixed &rhs)
{
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator>= (const Fixed &rhs)
{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator< (const Fixed &rhs)
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator<= (const Fixed &rhs)
{
    return (this->getRawBits() <= rhs.getRawBits());
}

// Arithmetic 4 operators //

Fixed Fixed::operator+ (const Fixed &rhs)
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator- (const Fixed &rhs)
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator* (const Fixed &rhs)
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/ (const Fixed &rhs)
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

// pre-fix increment - return reference to object
Fixed & Fixed::operator++(void)
{
    this->fxvalue++;
    return (*this);
}

// post-fix increment, we send int to this function. It is necessary to 
Fixed & Fixed::operator++(int x)
{
    Fixed temp(*this);
    this->fxvalue++;
    return temp;
}

// pre-fix decrement - return reference to object
Fixed & Fixed::operator--(void)
{
    this->fxvalue--;
    return (*this);
}

// post-fix increment, we send int to this function. It is necessary to 
Fixed & Fixed::operator--(int x)
{
    Fixed temp(*this);
    this->fxvalue--;
    return temp;
}

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/