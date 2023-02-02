#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat():name("Default"), grade(150)
{
    
}

Bureaucrat::~Bureaucrat()
{
    /* cout << "Bureucrat consturactor called!!" << endl; */
}

Bureaucrat::Bureaucrat(const string &Name,int grade) : name(Name)
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw GradeTooLowException();
    }
    else
        this->grade = grade;
    /* cout << Name << " bureaucrat constructor called " << endl; */
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{
    *this = copy;
    cout << "Copy contructor called !!" << endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){

    return (*this);
}

const string&  Bureaucrat::getName()const
{
    return(this->name);
}
int     Bureaucrat::getGrade()const
{
    return(this->grade);
}
void    Bureaucrat::increment()
{
    if ((this->grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrement()
{
    if ((this->grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

void Bureaucrat::signForm(AForm &AForm)const
{
    try
    {
        AForm.beSigned(*this);
        cout << this->getName() << " signed " << AForm.getName() << endl;
    }
    catch (std::exception &e)
    {
        cout << this->getName() << " couldn't sign " << AForm.getName() << " because " << e.what() << endl;
    }
}

void    Bureaucrat::executeForm(const AForm &AForm){
    try
    {
		std::cout << this->getName() << " executed " << AForm.getName() << std::endl;
		AForm.execute(*this);
    }
    catch(AForm::GradeTooLowException &e)
    {
        std::cout << this->getName() << " couldn't execute " << AForm.getName() << " named AForm because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out , const Bureaucrat& b){  //<< operator overloading 
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << endl;
    return (out);
}
