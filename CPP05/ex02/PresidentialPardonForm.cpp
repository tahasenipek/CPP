#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const string target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), target(copy.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &copy) const {
    if (copy.getGrade() > this->getGrade()) {
        throw AForm::GradeTooLowException();
    } else {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}