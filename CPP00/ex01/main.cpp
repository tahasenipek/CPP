#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

void    addperson(Phonebook *book, Contact cont)
{
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
	book->addContact(cont);
}

int ft_strcmp(std::string def, const char *cmd)
{
    int i = 0;
    int c = 0;
    while (def[i])
    {
        if (cmd[c] == def[i])
        {
            i++;
            c++;
        }
        else
            return (cmd[c] - def[i]);
    }
    if (c != i)
        return (1);
    return(0);
}


int    commandcont(std::string command, Phonebook *book)
{
	Contact contacts;
	static int tmp = 0;
	int	i = -1;
	std::string info;

    if (ft_strcmp(command, "ADD") == 0)
	{
        addperson(book, contacts);
		tmp++;
	}
    else if (ft_strcmp(command, "SEARCH") == 0)
    {

		if (tmp == 0)
			std::cout << "Your search is not true. Firstly you must be enter ADD commant!!" << std::endl;
		else
		{
			std::cout << "--------- All Phonebook "<<i<<"""---------" << std::endl;
			std::cout << "|" << std::setw(10) << std::right << "Index";
			std::cout << "|" << std::setw(10) << std::right << "First Name";
			std::cout << "|" << std::setw(10) << std::right << "Surname";
			std::cout << "|" << std::setw(10) << std::right << "Nick Name";
			std::cout << "|" << std::endl;
			std::cout << "........................" << std::endl;
			std::cout << contacts.getName() << std::endl;
			std::cout << contacts.getNickname() << std::endl;
			std::cout << "Enter a number for see Contacts" << std::endl;
			std::cin >> info;
			i = book->searchlist(&contacts, info);
			if (i == -1)
				std::cout << "Your search is not true" << std::endl;
		}
    }
    else if ((ft_strcmp(command, "EXİT") == 0))
    {
        std::cout << "your command is EXİT!!";
		return(-2);
    }
    else
        std::cout << "\033[1;31mYour input is not correct !!\033[0m" << std::endl;
	return (0);
}

int    getcommand(Phonebook book)
{
    std::string command;
	int	i = 0;

	std::cout << "\033[1;31mPlease enter command!!\033[0m"<< std::endl;
	std::cout << "\033[1;34mYour options are -ADD -SEARCH -EXİT\033[0m" << std::endl;
    std::cin >> command;
    i = commandcont(command, &book);
	return (i);
}

int main()
{
	Phonebook	book;
	int			i = 0;

	std::cout << "\033[1;31mYour Phonebook is empty\033[0m"<< std::endl;
	std::cout << "\033[1;32m-----------------------\033[0m"<< std::endl;
	while(1)
	{
        i = getcommand(book);
		if (i == -2)
			return (0);
	}
	return (0);
}