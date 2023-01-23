#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _spointnbr;
    static const int _fraction_bit = 8;
public:
    Fixed();
    Fixed(const Fixed &a);
    ~Fixed();
    Fixed &operator=(const Fixed &fixed);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};




#endif
