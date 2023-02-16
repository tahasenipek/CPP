#include "Fixed.hpp"

Fixed::Fixed(/* args */):_spointnbr(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int arg_int)
{
    //std::cout << "Int constructor called" << std::endl;
    setRawBits(arg_int << _fraction_bit);
}

Fixed::Fixed(float arg_flt)
{
    //std::cout << "Float constructor called" << std::endl;
    setRawBits((int)roundf(arg_flt * (1 << _fraction_bit)));
}

Fixed::Fixed(const Fixed &fixed)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor Called" << std::endl;
}
int Fixed::toInt(void) const
{
    return (getRawBits() >> _fraction_bit);
}

float Fixed::toFloat(void) const
{
    return ((float)getRawBits() / (1 << _fraction_bit));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    _spointnbr = fixed.getRawBits();
    return (*this);
}

void    Fixed::setRawBits(int const raw)
{
    _spointnbr = raw;
}

int Fixed::getRawBits(void) const
{
    return(_spointnbr);
}

std::ostream &operator <<(std::ostream &os, Fixed const &fixed)
{
    os << fixed.toFloat();
    return (os);
}

//////////////////////////////////////////////////////////////////////////////

bool Fixed::operator<(Fixed const &fixed)const
{
    return (getRawBits() < fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixed)const
{
    return (getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator>=(Fixed const &fixed)const
{
    return (getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator>(Fixed const &fixed)const
{
    return (getRawBits() > fixed.getRawBits());
}

bool Fixed::operator==(Fixed const &fixed)const
{
    return (getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &fixed)const
{
    return (getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(Fixed const &fixed)const
{
    Fixed news(toFloat() + fixed.toFloat());
    return (news);
}

Fixed Fixed::operator*(Fixed const &fixed)const
{
    Fixed news(toFloat() * fixed.toFloat());
    return (news);
}

Fixed Fixed::operator-(Fixed const &fixed)const
{
    Fixed news(toFloat() - fixed.toFloat());
    return (news);
}

Fixed Fixed::operator/(Fixed const &fixed)const
{
    Fixed news(toFloat() / fixed.toFloat());
    return (news);
}

Fixed &Fixed::operator++(void)
{
    _spointnbr += 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    _spointnbr += 1;
    return (tmp);
}

Fixed &Fixed::operator--(void)
{
    _spointnbr -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    _spointnbr -= 1;
    return (tmp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
	
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

