#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <iostream>
#include <string>

class Phonebook
{
private:
    Contacts list[7];
    int curren_size;
public:
    Phonebook(/* args */);
    ~Phonebook();
    void          addList(Contacts tmp);
    void          another(Contacts tmp, Phonebook *book);
    void          Searching();
    std::string    sizecont(std::string info);
};


#endif