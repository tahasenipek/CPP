#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <stdlib.h>


class Phonebook{
	private:
		int	current_size;
		Contact contac[7];
	public:
		void		addContact(Contact contact);
		int			searchlist(Contact *contact, std::string info);
		std::string	lstprnt(void);
		void		phonelistprint(Phonebook book, int i);
		Phonebook();
};

int ft_strcmp(std::string def, const char *cmd);

#endif