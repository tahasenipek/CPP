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
    Weapon();
     Weapon(string type);
    ~Weapon();
    const string &getType();
    void setType(string name);
};


#endif