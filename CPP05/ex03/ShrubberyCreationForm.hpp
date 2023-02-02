#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string target;

    ShrubberyCreationForm();

public:
    ShrubberyCreationForm(const std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm &);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);

    void	execute(const Bureaucrat &) const;
};

#endif