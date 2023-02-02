#ifndef _BUREUCRAT_HPP_
#define _BUREUCRAT_HPP_

#include <iostream>
#include <exception>
#include "AForm.hpp"

using std::endl;
using std::cout;
using std::string;
class AForm;

class Bureaucrat
{
private:
    const string name;
    int     grade;
    class GradeTooHighException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade too high!!";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Grade too low!!";
            }
    };
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const string &Name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat&    operator=(const Bureaucrat &other);
    const string&  getName()const;
    int            getGrade()const;
    void           increment();
    void           decrement();
    void           executeForm(const AForm &AForm);
    void           signForm(AForm &AForm)const;
};

std::ostream& operator<<(std::ostream& out , const Bureaucrat& b);


#endif