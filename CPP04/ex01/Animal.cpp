#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Default";
    cout << "Animal Constructors called!!" << endl;
}

Animal::Animal(const Animal &other)
{
    *this = other;
    cout << "Animal copy constructors called!!" << endl;
}

Animal::~Animal()
{
    cout << "Animal Destructor called!!" << endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    this->type = copy.type;
    cout << "Copy assigment constructor called !!" << endl;
    return *this;
}

void    Animal::makeSound() const
{
    
}

string    Animal::getType() const
{
    return (this->type);
}