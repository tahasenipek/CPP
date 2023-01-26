#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default consturctor called!!" << std::endl;
    this->_name = "Default";
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    this->_hitPoints = 100;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap deconstructor called!!" << std::endl;
}

FragTrap::FragTrap(const std::string name)
{
    this->_name = name;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
    this->_hitPoints = 100;
    std::cout << "FragTrap " << name << " constructor called !!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "FragTrap copy constructor called !!";
    *this = copy;
}

void    FragTrap::attack(const std::string name)
{
    if (this->_energyPoint > 0 && this->_hitPoints > 0)
    {
        std::cout << name << " attack causing " << this->_attackDamage << " point !!" << std::endl; 
    }
    else
        std::cout << "There is no enough " << (!_hitPoints ? "energy" : "hit") << "point" << std::endl;
    this->_energyPoint--;
}

FragTrap    &FragTrap::operator=(const FragTrap &copy)
{
    if (this == &copy)
        return (*this);
    this->_name = copy._name;
    this->_attackDamage = copy._attackDamage;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoint = copy._energyPoint;
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "High Five Request ✋🏼✋🏾 " << std::endl; 
}