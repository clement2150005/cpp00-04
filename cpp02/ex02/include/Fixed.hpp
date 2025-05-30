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

    int                 toInt(void) const;
    float               toFloat(void) const;
    int                 getRawBits(void) const;
    void                setRawBits(int const raw);
    bool                operator>(const Fixed &other) const;
    bool                operator<(const Fixed &other) const;
    bool                operator>=(const Fixed &other) const;
    bool                operator<=(const Fixed &other) const;
    bool                operator==(const Fixed &other) const;
    bool                operator!=(const Fixed &other) const;
    Fixed               operator+(const Fixed &other) const;
    Fixed               operator-(const Fixed &other) const;
    Fixed               operator*(const Fixed &other) const;
    Fixed               operator/(const Fixed &other) const;
    Fixed               operator++(int);
    Fixed&              operator++();
    Fixed               operator--(int);
    Fixed&              operator--();
    static const Fixed  &min(const Fixed &a, const Fixed &b);
    static Fixed        &min(Fixed &a, Fixed &b);
    static const Fixed  &max(const Fixed &a, const Fixed &b);
    static Fixed        &max(Fixed &a, Fixed &b);
};

std::ostream    &operator<<(std::ostream &out, const Fixed &fixed);
