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
