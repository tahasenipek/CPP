#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP


#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap (const std::string name);
        FragTrap (const FragTrap &copy);
        FragTrap &operator=(const FragTrap &copy);

        void    attack(const std::string name);
        void    highFivesGuys(void);
};


#endif