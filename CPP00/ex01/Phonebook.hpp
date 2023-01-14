#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <stdlib.h>


class Phonebook{
	private:
		Contact contac[7];
		int	current_size;
	public:
		void	addContact(Contact *contact);
		int		searchlist(Contact *contact, std::string info);
		//void	Contactsdisplay(Contact *contact);
		void	returnsearchline(Contact *contact);
};

int ft_strcmp(std::string def, const char *cmd);

#endif