#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    cout << "Dog constructor called!!" << endl;
}

Dog::~Dog()
{
    cout << "Dog destructor called!!" << endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    cout << "Dog copy constructor called!!" << endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    this->type = copy.type;
    cout << "Dog assigment operator called!!" << endl;
    return (*this);
}

void Dog::makeSound(void)const
{
    cout << "Hav Hav" << endl;
}
