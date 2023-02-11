#include "PhoneBook.hpp"

Contacts::Contacts(/* args */)
{
}

Contacts::~Contacts()
{
}

void    Contacts::setName(std::string info)
{
    this->name = info;
}

void    Contacts::setSurname(std::string info)
{
    this->surname = info;
}

void    Contacts::setNumber(std::string info)
{
    this->number = info;
}

void    Contacts::setNickname(std::string info)
{
    this->nickname = info;
}

void    Contacts::setSecret(std::string info)
{
    this->secret = info;
}

std::string    Contacts::getName(void)
{
    return(this->name);
}

std::string    Contacts::getSurname(void)
{
    return(this->surname);
}

std::string    Contacts::getNickname(void)
{
    return(this->nickname);
}

std::string    Contacts::getNumber(void)
{
    return(this->number);
}


std::string    Contacts::getSecret(void)
{
    return(this->secret);
}

