#include "Intern.hpp"

Intern::Intern(){
}

Intern::Intern(const Intern &copy){
    *this = copy;
}

Intern::~Intern(){
}

Intern &Intern::operator=(const Intern &copy){
    return *this;
}

AForm	*Intern::makeform(string formName, string targetName){
	string formNames[3] = {
        "shrubbery creat",
		"robotomy request",
		"presidential pardon"
    };

    AForm		*forms[3] =
	{
		new ShrubberyCreationForm(targetName),
		new RobotomyRequestForm(targetName),
		new PresidentialPardonForm(targetName)
	};

    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
			cout << "Intern creates " << formName << std::endl;
			return (forms[i]);
        }
    }
	cout << "Intern can't create" << formName << std::endl;
    return nullptr;
}