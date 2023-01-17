#include "Contact.hpp"

void	Contact::setName(std::string name)
{
	this->name = name;
}

void Contact::setSurname(std::string surname)
{
	this->surname = surname;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setNumber(std::string number)
{
	this->number = number;
}

void Contact::setSecret(std::string secretinfo)
{
	this->secret = secretinfo;
}

std::string	Contact::getName()
{
	return (this->name);
}

std::string Contact::getSurname()
{
	return (this->surname);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getNumber()
{
	return (this->number);
}

std::string Contact::getSecret()
{
	return (this->secret);
}

void	Contact::search(int index)
{
	std::cout<<"|         "<<std::to_string(index)<<"|";
    for(int j = 0; j < (10 - (int)this->name.length()); j++)
			std::cout<<" ";
    if (this->name.length() > 10)
			std::cout<<this->name.substr(0, 9)<<".";
    else
			std::cout<<this->name;
    std::cout<<"|";
    for(int j = 0; j < (10 - (int)this->surname.length()); j++)
			std::cout<<" ";
    if (this->surname.length() > 10)
			std::cout<<this->surname.substr(0, 9)<<".";
    else
			std::cout<<this->surname;
    std::cout<<"|";
    for(int j = 0; j < (10 - (int)this->nickname.length()); j++)
			std::cout<<" ";
    if (this->nickname.length() > 10)
			std::cout<<this->nickname.substr(0, 9)<<".";
    else
			std::cout<<this->nickname;
    std::cout<<"|"<<std::endl;
}