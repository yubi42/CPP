/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yubi42 <yubi42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:52:26 by yubi42            #+#    #+#             */
/*   Updated: 2024/02/12 20:55:34 by yubi42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
    int	value;
	static const int fract_bits = 8;

public:
    Fixed(void);
    Fixed(const Fixed& cpy);
    ~Fixed();

    void setRawBits( int const raw );
    int getRawBits( void ) const;
    Fixed& operator=(const Fixed& src);

};

#endif