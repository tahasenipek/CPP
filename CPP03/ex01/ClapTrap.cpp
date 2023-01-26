#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "Default constructor called." << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    _hitPoints = 10;
    _energyPoint = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap "<< name << " constructor called!! " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destructor called!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called!!" << std::endl;
    *this = copy;
}

ClapTrap   &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this != &copy)
    {
        std::cout << "Copy assignment called!!" << std::endl;
        this->_name         = copy._name;
        this->_attackDamage = copy._attackDamage;
        this->_energyPoint  = copy._energyPoint;
        this->_hitPoints    = copy._hitPoints;
        return(*this);
    }
    else
        return (*this);
}


void    ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints > 0 && this->_energyPoint > 0)
        std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    else
        std::cout << this->_name << (!this->_energyPoint ? "_energyPoint NO!!" : "\033[1;31m has not hit points!!\033[0m") << std::endl;
    this->_energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > 0)
    {
        std::cout << this->_name << " taked a damage " << amount << " points." << std::endl;
        this->_hitPoints -=  amount;
    }

}
 
void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount > 0)
    {
        std::cout << this->_name << " be repaired " << amount << " points." << std::endl;
        this->_hitPoints += amount;
        this->_energyPoint--;
    }
}