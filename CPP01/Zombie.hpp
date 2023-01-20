#ifndef ZOMBİE_HPP
#define ZOMBİE_HPP

#include <iostream>


class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce( void );
    void setName(std::string name);
};

Zombie *newZombie(std::string name);
void randomChump( std::string name );
#endif