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

void    Phonebook::extrainfoprint(int index)
{
    std::cout << "İndex: " << index << std::endl;
    std::cout << "Firts name: " << this->list[index - 1].getName() << std::endl;
    std::cout << "Last name: " << this->list[index - 1].getSurname() << std::endl;
    std::cout << "Nick name: " << this->list[index - 1].getNickname() << std::endl;
    std::cout << "Number:" << this->list[index - 1].getNumber() << std::endl;
    std::cout << "Secret information:" << this->list[index - 1].getSecret() << std::endl;
}

void    Phonebook::printdetailcontacts(void)
{
    std::string info;
    
    std::cout << "\033[1;34mEnter a number for see Contacts\033[0m" << std::endl;
    std::cin >> info;
    if (info == "1")
    {
        if (this->curren_size < 1)
            std::cout <<  "\033[1;31m Your input is not true!! We dont have contact info 1.index\033[0m" << std::endl;
            else
                extrainfoprint(1);
    }
    else if (info == "2")
    {
        if (this->curren_size < 2)
            std::cout <<  "\033[1;31m Your input is not true!! We dont have contact info 2.index\033[0m" << std::endl;
        else
            extrainfoprint(2);
    }
    else if (info == "3")
    {
        if (this->curren_size < 3)
            std::cout <<  "\033[1;31m Your input is not true!! We dont have contact info 3.index\033[0m" << std::endl;
        else
            extrainfoprint(3);
    }
    else if (info == "4")
    {
        if (this->curren_size < 4)
            std::cout <<  "\033[1;31m Your input is not true!! We dont have contact info 4.index\033[0m" << std::endl;
        else
            extrainfoprint(4);
    }
    else if (info == "5")
    {
        if (this->curren_size < 5)
            std::cout <<  "\033[1;31m Your input is not true!! We dont have contact info 5.index\033[0m" << std::endl;
        else
            extrainfoprint(5);
    }
    else if (info == "6")
    {
        if (this->curren_size < 6)
            std::cout <<  "\033[1;Your input is not true!! We dont have contact info 6.index\033[0m" << std::endl;
        else
            extrainfoprint(6);
    }
    else if (info == "7")
    {
        if (this->curren_size < 7)
            std::cout <<  "\033[1;31m Your input is not true!! We dont have contact info 7.index\033[0m" << std::endl;
        else
            extrainfoprint(7);
    }
    else if (info == "8")
    {
        if (this->curren_size < 8)
            std::cout <<  "\033[1;31m Your input is not true!! We dont have contact info 8.index \033[0m" << std::endl;
        else
            extrainfoprint(8);
    }
    else
        std::cout <<  "\033[1;31m Your input is not true please enter 1 to 8 number !! \033[0m" << std::endl;
}

int    Phonebook::sizecont(std::string info, int num)
{
    int i = 0;
    if (info.length() > 10)
    {
        while (i < 10)
        {
            std::cout << info[i];
            i++;
        }
        std::cout << ".|";
        if (num == nickname)
             std::cout << std::endl;
        return(0);
    }
    return(1);
}

void    Phonebook::gotoprint(int i)
{
     std::cout << "|" << std::setw(10) <<std::right << (this->list[i].getName());
}

void Phonebook::infoprint()
{
    int index = 1;
    std::string tmp;

    for(int i = 0; i < this->curren_size ; i++)
    {
        std::cout << "|" << std::setw(10) <<std::right << index++ << "|";
        if (sizecont(this->list[i].getName(), firstname))
            gotoprint(i);
        if (sizecont(this->list[i].getSurname(), surname))
            std::cout << "|" << std::setw(10) <<std::right << (this->list[i].getSurname());
        if (sizecont(this->list[i].getNickname(),nickname))
            std::cout << "|" << std::setw(10) <<std::right << (this->list[i].getNickname()) << "|" << std::endl;
    }
}


void Phonebook::Searching()
{   

    if ( this->curren_size == 0)
			std::cout << "Your search is not true. Firstly you must be enter ADD commant!!" << std::endl;
	else
	{
        std::cout << "------------- All Phonebook "<<this->curren_size<<""" ---------------" << std::endl;
        /* std::cout << "|" << std::setw(10) << std::right << "Index";
        std::cout << "|" << std::setw(10) << std::right << "First Name";
        std::cout << "|" << std::setw(10) << std::right << "Last Name";
        std::cout << "|" << std::setw(10) << std::right << "Nick Name";
        std::cout << "|" << std::endl; */
        infoprint();
	}
}