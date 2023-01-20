#include "HumanB.hpp"

HumanB::HumanB(string name)
        :   _name(name)
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void)
{
    cout << _name << " attack with their " << _weapons->getType() << endl;
}

void    HumanB::setWeapon(Weapon &club)
{
    _weapons = &club;
}