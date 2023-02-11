#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include <limits.h>
#include <iomanip>

PhoneBook::PhoneBook(/* args */)
{
    this->curren_size = 0;
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::addList(Contacts tmp)
{
    static int i = 0;

    if(i == 8)
    {
        i = 0;
        std::cout << "\033[32m;Your List is full. Oldest entered data is deleted !!\033[0m;";
    }
    if (i <= 7)
    {
        this->list[i] = tmp;
        i++;
        if (this->curren_size < 8)
            this->curren_size++;
    }
}

int    PhoneBook::SearchHaveNot(void)
{
    if (this->curren_size != 0)
            return (1);
    else
        return (0);
};

void    PhoneBook::extrainfoprint(int index)
{
    std::cout << "İndex: " << index << std::endl;
    std::cout << "Firts name: " << this->list[index - 1].getName() << std::endl;
    std::cout << "Last name: " << this->list[index - 1].getSurname() << std::endl;
    std::cout << "Nick name: " << this->list[index - 1].getNickname() << std::endl;
    std::cout << "Number:" << this->list[index - 1].getNumber() << std::endl;
    std::cout << "Secret information:" << this->list[index - 1].getSecret() << std::endl;
}

void    PhoneBook::printdetailcontacts(void)
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

void    PhoneBook::sizecont(std::string info, int num)
{
    if (info.length()<= 10)
        gotoprint(info);
    else if (info.length() > 10)
        gotolenprint(info);
    if (num == nickname)
        std::cout << std::endl;
}

void    PhoneBook::gotolenprint(std::string info)
{
    std::string tmp;
  
    tmp = info.substr(0,9).append(".");
    gotoprint(tmp);
}

void    PhoneBook::gotoprint(std::string info)
{
     std::cout << std::setw(10) <<std::right << info << "|";
}

void PhoneBook::infoprint()
{
    int index = 1;

    for(int i = 0; i < this->curren_size; i++)
    {
        std::cout << "|" << std::setw(10) << std::right << index++ << "|";
        sizecont(this->list[i].getName(), firstname);
        sizecont(this->list[i].getSurname(), surname);
        sizecont(this->list[i].getNickname(), nickname);
    }
}

void PhoneBook::Searching()
{   

    if ( this->curren_size == 0)
			std::cout << "Your search is not true. Firstly you must be enter ADD commant!!" << std::endl;
	else
	{
        std::cout << "------------- All PhoneBook "<<this->curren_size<<""" ---------------" << std::endl;
        std::cout << "|" << std::setw(10) << std::right << "Index";
        std::cout << "|" << std::setw(10) << std::right << "First Name";
        std::cout << "|" << std::setw(10) << std::right << "Last Name";
        std::cout << "|" << std::setw(10) << std::right << "Nick Name";
        std::cout << "|" << std::endl;
        infoprint();
	}
}