#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <iostream>
#include <string>

class Phonebook
{
private:
    Contacts list[8];
    int curren_size;
public:
    Phonebook(/* args */);
    ~Phonebook();
    void    addList(Contacts tmp);
    void    another(Contacts tmp, Phonebook *book);
    void    Searching();
    void    printdetailcontacts(void);
    void    extrainfoprint(int index);
    void    infoprint();
    void    gotoprint(std::string info);
    void    gotolenprint(std::string info);
    void     sizecont(std::string info, int num);      
};

enum numbers
{   firstname = 8, 
    surname = 9, 
    nickname = 10,
};

#endif