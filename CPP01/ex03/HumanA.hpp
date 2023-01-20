#ifndef    HUMANA_HPP
#define    HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
private:
    string  _name;
    string  _weapons;
public:
    HumanA(string name, Weapon club);
    ~HumanA();
    void attack(void);
};

#endif