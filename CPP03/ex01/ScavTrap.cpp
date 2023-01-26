#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_name = "Default";
    this->_attackDamage = 20;
    this->_energyPoint  = 50;
    this->_hitPoints    = 100;
    std::cout << "Default ScavTrap constructor called!!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
    this->_name = name;
    this->_attackDamage = 20;
    this->_energyPoint  = 50;
    this->_hitPoints    = 100;
    std::cout << name << "ScavTrap constructor called!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "ScavTrap copy constructor called!!" << std::endl;
    *this = copy;
}

void    ScavTrap::attack(const std::string  &target)
{
    if (this->_energyPoint > 0 && this->_hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << "points of damage!!" << std::endl;
    }
    else
        std::cout << "Scav Trap " << this->_name << "There is no " << (!this->_energyPoint ? "enerhy" : "hit points") << std::endl;
    this->_energyPoint--;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& copy)
{
    if (this == &copy)
        return (*this);
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoint = copy._energyPoint;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void    guardGate(void)
{
    std::cout << "\033[1;32mMood is guardGate!!\033[1;0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScaTrap destructor called!!" << std::endl;
}