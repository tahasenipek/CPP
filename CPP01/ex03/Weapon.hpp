#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

using std::string;
using std::endl;
using std::cout;

class Weapon
{
private:
    string _type;
public:
    Weapon(string name);
    ~Weapon();
    const string &getType();
    string &setType(void) const;
};


#endif