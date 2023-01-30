#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    cout << "WrongCat constructor called!!" << endl;
}

WrongCat::~WrongCat()
{
    cout << "WrongCat constructor called!!" << endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
    cout << "Copy WrongCat constructor called !!" << endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
    this->type = copy.type;
    return (*this);
}

void    WrongCat::makeSound()const
{
    cout << "WrongCat sound" << endl;
}