#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    const string target;
public:
    PresidentialPardonForm(/* args */);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const string target);
    PresidentialPardonForm(const PresidentialPardonForm &PPForm);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
    void	execute(const Bureaucrat &copy) const;
};



#endif