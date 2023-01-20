#include "Weapon.hpp"

Weapon::Weapon()
{
    _type = "No";
}

Weapon::Weapon(string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

const string  &Weapon::getType()
{
    return ((string &)_type);
}

void Weapon::setType(string name)
{
    _type = name;
}