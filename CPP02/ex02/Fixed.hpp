/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jborner <jborner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:52:26 by yubi42            #+#    #+#             */
/*   Updated: 2024/04/29 14:05:16 by jborner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
#include <limits>

class Fixed
{
private:
    int	value;
	static const int fract_bits = 8;
    void copy(const Fixed& src);

public:
    Fixed(void);
    Fixed(const Fixed& src);
    Fixed(const int& num);
    Fixed(const float& num);
    ~Fixed();

    void setRawBits( int const raw );
    int getRawBits( void ) const;
    int toInt( void ) const;
    float toFloat( void ) const;

    Fixed& operator=(const Fixed& src);
    Fixed operator+(const Fixed& src) const;
    Fixed operator-(const Fixed& src) const;
    Fixed operator*(const Fixed& src) const;
    Fixed operator/(const Fixed& src) const;
    bool operator>(const Fixed& src) const;
    bool operator<(const Fixed& src) const;
    bool operator>=(const Fixed& src) const;
    bool operator<=(const Fixed& src) const;
    bool operator==(const Fixed& src) const;
    bool operator!=(const Fixed& src) const;
    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);
    static Fixed& max(Fixed& fp1, Fixed& fp2);
    static Fixed& min(Fixed& fp1, Fixed& fp2);
    static const Fixed& max(const Fixed& fp1, const Fixed& fp2);
    static const Fixed& min(const Fixed& fp1, const Fixed& fp2);
};

 std::ostream& operator<<(std::ostream& os, const Fixed& num);
 
#endif