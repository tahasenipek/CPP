#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
using std::string;
using std::endl;
using std::cout;

class WrongAnimal
{
protected:
    string type;
public:
    WrongAnimal();
    ~WrongAnimal();
    void    makeSound();
    WrongAnimal& operator=(const WrongAnimal &copy);
    WrongAnimal(const WrongAnimal &copy);
    virtual void makeSound(void)const;
    string  getType(void)const;
};

#endif