#include "Contact.hpp"
#include "Phonebook.hpp"

void    addperson(Phonebook *book)
{
	Contact cont;
    std::string info;                                                                                                                                   
    int i = 0;

    while (i < 5)
    {
        std::cin >> info;
		if (i == 0)
		{
			cont.setName(info);
		}
		else if(i == 1)
		{
			cont.setSurname(info);
		}
		else if(i == 2)
		{
			cont.setSurname(info);
		}
		else if(i == 3)
		{
			cont.setSurname(info);
		}
		else if(i == 4)
		{
			cont.setSurname(info);
			book->addContact(&cont);
		}
        i++;
    }
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


int    commandcont(std::string command, Phonebook book)
{
	Contact contacts;
	int	i = -1;
	std::string info;

    if (ft_strcmp(command, "ADD") == 0)
    {
        addperson(&book);
    }
    else if (ft_strcmp(command, "SEARCH") == 0)
    {
		std::cout << "Enter a number for see Contacts" << std::endl;
		std::cin >> info;
        i = book.searchlist(&contacts, info);
		printf("i == %d\n", i);
		if (i == -1)
			std::cout << "Your search is not true." << std::endl;
    }
    else if ((ft_strcmp(command, "EXİT") == 0))
    {
        std::cout << "your command is EXİT!!";
		return(-2);
    }
    else
        std::cout << "Your input is not correct !!" << std::endl;
	return (0);
}

int    getcommand(Phonebook book)
{
    std::string command;
	int	i = 0;
	std::cout << "Please enter command!!" << std::endl;
	std::cout << "Your options are -ADD -SEARCH -EXİT" << std::endl;
    std::cin >> command;
    i = commandcont(command, book);
	return (i);
}

int main()
{
	Phonebook	book;
	int			i = 0;
	std::cout << "Your Phonebook is empty"<< std::endl;
	std::cout << "-----------------------"<< std::endl;
    while(1)
	{
        i = getcommand(book);
		if (i == -2)
			return (0);
	}
	return (0);
}