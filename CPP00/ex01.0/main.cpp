#include <iostream>
#include "Phonebook.hpp"
#include "Contacts.hpp"


void    add_contacts(Phonebook *book)
{
    Contacts cont;
    std::string info;

    std::cout << "Enter a Name:";
    std::cin >> info;
	cont.setName(info);
	std::cout << "Enter a Surname:";
    std::cin >> info;
	cont.setSurname(info);
	std::cout << "Enter a Nick Name:";
    std::cin >> info;
	cont.setNickname(info);
	std::cout << "Enter a Phone Number:";
    std::cin >> info;
	cont.setNumber(info);
	std::cout << "Enter a Secret İnfo:";
    std::cin >> info;
	cont.setSecret(info);
	book->addList(cont);
}


int main()
{
    Phonebook book;
    std::string info;
	std::cout << "\033[1;31mYour Phonebook is empty\033[0m"<< std::endl;
	std::cout << "\033[1;32m-----------------------\033[0m"<< std::endl;
    while (info != "EXİT")
    {
        std::cout << "\033[1;31mPlease enter a command..\033[0m"<< std::endl;
        std::cin >>info;
        if (info == "ADD")
            add_contacts(&book);
        if (info == "SEARCH")
        {
            book.Searching();
            book.printdetailcontacts();
        }
    }
    return (0);
}