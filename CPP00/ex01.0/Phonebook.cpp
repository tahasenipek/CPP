#include <iostream>
#include "Phonebook.hpp"
#include "Contacts.hpp"
#include <limits.h>
#include <iomanip>

Phonebook::Phonebook(/* args */)
{
    this->curren_size = 0;
};

Phonebook::~Phonebook()
{
};

void    Phonebook::addList(Contacts tmp)
{
    static int i = 0;
    if (curren_size != 8)
    {
        this->list[i] = tmp;
        i++;
        this->curren_size++;
    }
    if (this->curren_size == 8)
    {
        std::cout << "Your List is full. Oldest entered data is deleted !!";

    }
};

void    Phonebook::another(Contacts tmp, Phonebook *book)
{
    std::cout << list[0].getName();
    std::cout << list[0].getSecret();
}

std::string    Phonebook::sizecont(std::string info)
{   
    if ( info.size() <= 10)
        return(info);
    else
    {
        return(info.substr(0, 9));
    }
}

void Phonebook::Searching()
{   
    std::string info;
    int index = 1;
    if ( this->curren_size == 0)
			std::cout << "Your search is not true. Firstly you must be enter ADD commant!!" << std::endl;
	else
	{
        std::cout << "------------- All Phonebook "<<this->curren_size<<""" ---------------" << std::endl;
        std::cout << "|" << std::setw(10) << std::right << "Index";
        std::cout << "|" << std::setw(10) << std::right << "First Name";
        std::cout << "|" << std::setw(10) << std::right << "Last Name";
        std::cout << "|" << std::setw(10) << std::right << "Nick Name";
        std::cout << "|" << std::endl;
        for(int i = 0; i < this->curren_size; i++)
        {
            std::cout << "|";
            std::cout << std::setw(10) <<std::right << index++;
            std::cout << "|";
            std::cout << std::setw(10) <<std::right << sizecont(this->list[i].getName());
            std::cout << "|";
            std::cout << std::setw(10) <<std::right << sizecont(this->list[i].getSurname());
            std::cout << "|";
            std::cout << std::setw(10) <<std::right << sizecont(this->list[i].getNickname());
            std::cout << "|" << std::endl;
        }
        std::cout << "Enter a number for see Contacts" << std::endl;
        std::cin >> info;
	}
}