/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:03:35 by ufitzhug          #+#    #+#             */
/*   Updated: 2024/03/22 14:06:54 by ufitzhug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
    int fxvalue;
    static const int nfb;
public:
    Fixed();
    Fixed (const Fixed & src);
    ~Fixed();
    Fixed& operator=(Fixed const & rhs);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};


#endif