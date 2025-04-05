/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:27:44 by ccolin            #+#    #+#             */
/*   Updated: 2025/04/05 12:15:52 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

