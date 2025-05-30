#include "Fixed.hpp"
#include <cmath>
#include <iostream>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
    this->_value = 0;
}

Fixed::Fixed(const int integer)
{
    this->_value = integer << this->_fractionalBits;
}

Fixed::Fixed(const float floatingPoint)
{
    this->_value = roundf(floatingPoint * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
    this->_value = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other)
{
    if (this != &other)
	    this->_value = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
}

int     Fixed::toInt(void) const
{
    return (this->_value >> _fractionalBits);
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_value / (1 << _fractionalBits));
}

int Fixed::getRawBits( void ) const
{
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

bool    Fixed::operator>(const Fixed &other) const
{
    return (this->_value > other._value);
}

bool    Fixed::operator<(const Fixed &other) const
{
    return (this->_value < other._value);
}

bool    Fixed::operator>=(const Fixed &other) const
{
    return (this->_value >= other._value);
}

bool    Fixed::operator<=(const Fixed &other) const
{
    return (this->_value <= other._value);
}

bool    Fixed::operator==(const Fixed &other) const
{
    return (this->_value == other._value);
}

bool    Fixed::operator!=(const Fixed &other) const
{
    return (this->_value != other._value);
}

Fixed    Fixed::operator+(const Fixed &other) const
{
    Fixed   result;

    result._value = this->_value + other._value;
    return (result);
}

Fixed    Fixed::operator-(const Fixed &other) const
{
    Fixed   result;

    result._value = this->_value - other._value;
    return (result);
}

Fixed    Fixed::operator*(const Fixed &other) const
{
    Fixed   result;

    result._value = (this->_value * other._value) >> _fractionalBits;
    return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;

	result._value = (this->_value << _fractionalBits) / other._value;
	return result;
}

Fixed   Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_value += 1;
    return (temp);
}

Fixed&  Fixed::operator++()
{
    this->_value += 1;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_value -= 1;
    return (temp);
}

Fixed&  Fixed::operator--()
{
    this->_value -= 1;
    return (*this);
}

std::ostream    &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

const Fixed&    Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed&    Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed&  Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
