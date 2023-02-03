#include "Type.hpp"

Type::Type(double value) : value(value) {};

Type::~Type()
{
}

Type::Type(const Type &s)
{

}
Type    &Type::operator=(const Type &s)
{
    this->value = s.value;
    return (*this);
}

char Type::asChar() const {
        if (std::isnan(value) || std::isinf(value))
            return '\0';
        if (value < 0. || value > 255.)
            return '\0';
        if (value < 32. || value > 126.)
            return '\0';
        return static_cast<char>(value);
}

int Type::asInt() const {
        if (std::isnan(value) || std::isinf(value))
            return 0;
        return static_cast<int>(value);
}

float Type::asFloat() const {
        if (std::isnan(value))
            return std::numeric_limits<float>::quiet_NaN();
        if (std::isinf(value)) {
            if (value > 0)
                return std::numeric_limits<float>::infinity();
            return -std::numeric_limits<float>::infinity();
        }
        return static_cast<float>(value);
}

double Type::asDouble() const {
        static bool a = true;
        int i = 0;
        if (std::isnan(value))
            return std::numeric_limits<double>::quiet_NaN();
        if (std::isinf(value)) {
            if (value > 0)
                return std::numeric_limits<double>::infinity();
            return -std::numeric_limits<double>::infinity();
        
        }
        return value;
}

std::ostream &operator<<(std::ostream &os, const Type &c) {
    char ch = c.asChar();
    if (ch == '\0')
        os << "Char : impossible";
    else if (ch < 32 || ch > 126)
        os << "Char :Non displayable";
    else
        os << "Char     : " << "'" << ch << "'";
    os << std::endl << "int      : " << c.asInt() << std::endl;
    os << std::fixed << std::setprecision(1) << "float    : " << c.asFloat() << "f" << std::endl;
    os << std::fixed << std::setprecision(1) << "double   : " << c.asDouble() <<  std::endl;
    
    return os;
}


