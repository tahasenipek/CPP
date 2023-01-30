#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    cout << "Cat constructor called!!" << endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    cout << "Cat copy constructor called!!" << endl;
}

Cat::~Cat()
{
    cout << "Cat destructor called!!" << endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    this->type = copy.type;
    cout << "Copy assigment constructor called!!" << endl;
    return (*this);
}

void   Cat::makeSound(void)const
{
    cout << "Meow Meow " << endl;
}
