#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain constructor called!!" << std::endl;
}

Brain::~Brain()
{
     std::cout << "Brain destructor called!!" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor !!" << std::endl;
}

Brain   &Brain::operator=(const Brain &copy)
{   
    for(int i = 0; i < 100 ; i++)
        this->ideas[i] = copy.ideas[i];
    std::cout << "Brain assigment operator called !!" << std::endl;
    return (*this);
}