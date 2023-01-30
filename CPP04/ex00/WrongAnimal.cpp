#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    cout << "WrongAnimal constructor called!!" << endl;
}

WrongAnimal::~WrongAnimal()
{
    cout << "WrongAnimal constructor called!!" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    cout << "Copy WrongAnimal constructor called !!" << endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
    this->type = copy.type;
    cout << "WrongAnimal assignment operator called!!" << endl;
    return (*this);
}

void    WrongAnimal::makeSound()const
{
    
}

string  WrongAnimal::getType(void) const
{
    return(this->type);
}