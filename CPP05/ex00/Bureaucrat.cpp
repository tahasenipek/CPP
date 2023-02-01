#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("Default"), grade(150)
{
    
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const string &Name, int grade) : name(Name)
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
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{

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

std::ostream& operator<<(std::ostream& out , const Bureaucrat& b){  //<< operator overloading 
    out << b.getName() << ", bureaucrat grade " << b.getGrade() << endl;
    return (out);
}
