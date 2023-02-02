#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &);
	~Intern();
	Intern &operator=(const Intern &);

	AForm	*makeform(string, string);
};

#endif