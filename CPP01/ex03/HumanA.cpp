#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon club)
{
    _name = name;
    _weapons = club.getType();
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    cout << _name << "attack with their" << _weapons;
}