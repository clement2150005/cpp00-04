class Fixed
{
private:
    int                 _value;
    static const int    _fractionalBits;

public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed& operator=(const Fixed &other);
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits(int const raw);
};

