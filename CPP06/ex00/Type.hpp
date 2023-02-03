#ifndef TYPE_HPP
#define TYPE_HPP

#include <iomanip>
#include <iostream>
#include <cmath>
#include <limits>

class Type {
public:
    Type(double value);
    ~Type();
    Type(const Type &s);
    Type    &operator=(const Type &);
    char asChar() const;
    int asInt() const;
    float asFloat() const;
    double asDouble() const;

private:
    double value;
};

std::ostream &operator<<(std::ostream &os, const Type &c);

#endif