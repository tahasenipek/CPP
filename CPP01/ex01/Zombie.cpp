#include "Zombie.hpp"

Zombie::Zombie()
{
     this->_name = " ";
}

Zombie::Zombie(int i, std::string name)
{
    if(!name.empty())
    {
        _name = name;
    }
}

Zombie::~Zombie()
{
    std::cout << "Destructor executed for " << this->_name << std::endl;
}


void Zombie::announce(void)
{
    if (_name.empty())
    {
        std::cout << "Empty name space!!" << std::endl;
    }
    else
        std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}