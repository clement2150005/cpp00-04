/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:27:44 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/05 15:09:45 by ccolin           ###   ########.fr       */
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
    bool            operator>(const Fixed &other) const;
    bool            operator<(const Fixed &other) const;
    bool            operator>=(const Fixed &other) const;
    bool            operator<=(const Fixed &other) const;
    bool            operator==(const Fixed &other) const;
    bool            operator!=(const Fixed &other) const;
    Fixed            operator+(const Fixed &other) const;
    Fixed            operator-(const Fixed &other) const;
    Fixed            operator*(const Fixed &other) const;
    Fixed            operator/(const Fixed &other) const;
    Fixed            operator++(int);
    Fixed&           operator++();
    Fixed            operator--(int);
    Fixed&           operator--();
};

std::ostream    &operator<<(std::ostream &out, const Fixed &fixed);
