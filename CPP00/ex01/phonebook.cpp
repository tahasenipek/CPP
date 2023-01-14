/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msenipek <msenipek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:04:53 by msenipek          #+#    #+#             */
/*   Updated: 2023/01/10 21:39:22 by msenipek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

void	Phonebook::addContact(Contact *cont)
{
	static int i = 0;
	
	if (i == 8)
	{
		i = 0;
	}
	if (i != 8)
	{
		
		this->contac[i] = *cont;
		if (i == 7)
			std::cout << "Phonebook is full. If you enter another info. we'll delete oldest info." << std::endl;
	}
	i++;
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