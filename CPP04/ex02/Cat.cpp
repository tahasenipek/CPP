#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    brain = new Brain();
    cout << "Cat constructor called!!" << endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    cout << "Cat copy constructor called!!" << endl;
}

Cat::~Cat()
{
    delete brain;
    cout << "Cat destructor called!!" << endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    this->type = copy.type;
    this->brain = new Brain();
    *(this->brain) = *(copy.brain);
    cout << "Copy assigment constructor called!!" << endl;
    return (*this);
}

void   Cat::makeSound(void)const
{
    cout << "Meow Meow " << endl;
}
