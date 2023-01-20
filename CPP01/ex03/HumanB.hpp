#ifndef    HUMANB_HPP
#define    HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    string  _name;
    string  _weapons;
public:
    HumanB(string name, Weapon club);
    ~HumanB();
    void attack(void);
};


#endif