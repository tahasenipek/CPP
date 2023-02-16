#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
private:
    int                 _spointnbr;
    static const int    _fraction_bit = 8;
public:
    Fixed();
    Fixed(const Fixed &a);
    Fixed &operator=(const Fixed &fixed);
    ~Fixed();
    
    Fixed (const int arg_int);
    Fixed (const float arg_flt);
    
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    int     toInt() const;
    float   toFloat(void) const;

    bool  operator>(Fixed const &fixed)const;
    bool  operator<(Fixed const &fixed)const;
    bool  operator<=(Fixed const &fixed)const;
    bool  operator>=(Fixed const &fixed)const;
    bool  operator==(Fixed const &fixed)const;
    bool  operator!=(Fixed const &fixed)const;

    Fixed operator+(Fixed const &fixed)const;
    Fixed operator*(Fixed const &fixed)const;
    Fixed operator-(Fixed const &fixed)const;
    Fixed operator/(Fixed const &fixed)const;

    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed operator--(int);
    Fixed &operator--(void);
    
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &, Fixed const &);

#endif
