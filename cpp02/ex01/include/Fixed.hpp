/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:27:44 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/05 14:06:40 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
    int                 _value;
    static const int    _fractionalBits;
    
public:
    Fixed();
    Fixed(const int integer);
    Fixed(const float floatingPoint);
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    ~Fixed();

    int             toInt(void) const;
    float           toFloat(void) const;
    int             getRawBits(void) const;
    void            setRawBits(int const raw);
};

std::ostream    &operator<<(std::ostream &out, const Fixed &fixed);
