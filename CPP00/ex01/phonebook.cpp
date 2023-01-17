/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merveipeksenipek <merveipeksenipek@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:04:53 by msenipek          #+#    #+#             */
/*   Updated: 2023/01/17 19:17:04 by merveipekse      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iomanip>

/* void	Phonebook::inputsizecont(Phonebook book)
{
	
} */

Phonebook::Phonebook(void)
{
	this->current_size = 0;
}

std::string	Phonebook::lstprnt(void)
{
	return (this->contac[0].getName());
}


void	Phonebook::addContact(Contact cont)
{
	if (current_size != 8)
	{
		contac[current_size] = cont;
		if (current_size == 7)
			std::cout << "Phonebook is full. If you enter another info. we'll delete oldest info." << std::endl;
	}
	current_size++;
	std::cout << contac[0].getName() << std::endl;
	std::cout << contac[0].getNickname();
}

int	Phonebook::searchlist(Contact *cont, std::string info)
{
	if (ft_strcmp(info, "0"))
		return (0);
	else if (ft_strcmp(info, "1"))
		return (1);
	else if (ft_strcmp(info, "2"))
		return (2);
	else if (ft_strcmp(info, "3"))
		return (3);
	else if (ft_strcmp(info, "4"))
		return (4);
	else if (ft_strcmp(info, "5"))
		return (5);
	else if (ft_strcmp(info, "6"))
		return (6);
	else if (ft_strcmp(info, "7"))
		return (7);
	else 
		return (-1);
}