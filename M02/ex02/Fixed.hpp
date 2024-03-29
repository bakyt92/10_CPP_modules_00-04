/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:58:52 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/27 11:43:37 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
private:
    int fxvalue;
    static const int nfb = 8;
public:
    Fixed();
    Fixed(const int a);// constructor with const float as parameter.
    Fixed(const float a);
    Fixed (const Fixed & src);
    ~Fixed();
    Fixed& operator=(Fixed const & rhs);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat (void) const;
    int toInt(void) const;
    // comparison operators
    bool operator== (const Fixed &rhs) const;
    bool operator!= (const Fixed &rhs) const;
    bool operator< (const Fixed &rhs) const;
    bool operator<= (const Fixed &rhs) const;
    bool operator> (const Fixed &rhs) const;
    bool operator>= (const Fixed &rhs) const;
    // math operators
    Fixed operator+ (const Fixed &rhs);
    Fixed operator- (const Fixed &rhs);
    Fixed operator* (const Fixed &rhs);
    Fixed operator/ (const Fixed &rhs);
    // increment / decrement operators
    Fixed & operator++(void);
    Fixed operator++(int);
    Fixed & operator--(void);
    Fixed operator--(int);
    // add functions min and max
    static Fixed & min (Fixed &a, Fixed &b);
    static const Fixed & min (Fixed const &a, Fixed const &b);
    static Fixed & max (Fixed &a, Fixed &b);
    static const Fixed & max (Fixed const &a, Fixed const &b);
};

std::ostream& operator<< (std::ostream &out, const Fixed &a);

#endif