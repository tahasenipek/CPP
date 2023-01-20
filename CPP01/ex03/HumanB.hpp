#ifndef    HUMANB_HPP
#define    HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    string  _name;
    Weapon  *_weapons;
public:
    HumanB(string name);
    ~HumanB();
    void attack(void);
    void setWeapon(Weapon &);
};

#endif