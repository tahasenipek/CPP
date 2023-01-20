#ifndef    HUMANA_HPP
#define    HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
private:
    string  _name;
    Weapon  &_weapons;
public:
    HumanA(string, Weapon &);
    ~HumanA();
    void attack(void);
};

#endif