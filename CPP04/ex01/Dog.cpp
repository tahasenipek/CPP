#include "Dog.hpp"
#include "Brain.hpp"
Dog::Dog()
{
    brain = new Brain();
    this->type = "Dog";
    cout << "Dog constructor called!!" << endl;
}

Dog::~Dog()
{
    delete brain;
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
    this->brain = new Brain();
    std::cout << "Diff" << std::endl;
    this->brain = copy.brain;
    cout << "Dog assigment operator called!!" << endl;
    return (*this);
}

void Dog::makeSound(void)const
{
    cout << "Hav Hav" << endl;
}
