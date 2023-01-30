#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::endl;
using std::string;
using std::cout;

class Animal{
protected:
    string type;

public:
    Animal();
    Animal(const Animal &copy);
    virtual ~Animal();
    Animal& operator=(const Animal &copy);
    string    getType() const;
    virtual void    makeSound()const;
};



#endif