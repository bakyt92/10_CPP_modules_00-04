/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:58:52 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/25 19:44:29 by ufitzhug         ###   ########.fr       */
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
    bool operator== (const Fixed &rhs);
    bool operator!= (const Fixed &rhs);
    bool operator< (const Fixed &rhs);
    bool operator<= (const Fixed &rhs);
    bool operator> (const Fixed &rhs);
    bool operator>= (const Fixed &rhs);
    
    Fixed operator+ (const Fixed &rhs);
    Fixed operator- (const Fixed &rhs);
    Fixed operator* (const Fixed &rhs);
    Fixed operator/ (const Fixed &rhs);
};

std::ostream& operator<< (std::ostream &out, const Fixed &a);

#endif