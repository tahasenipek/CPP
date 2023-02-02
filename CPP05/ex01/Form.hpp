#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>
#include <iostream>
#include <exception>
class Bureaucrat;

using std::endl;
using std::cout;
using std::string;

class Form
{
private:
    const string    name;
    bool            b;
    const int    signnote;
    const int       grade;
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
    Form();
    ~Form();
    Form(const Form &form);
    Form(const string &name);
    Form&    operator=(const Form &i);
    Form(const string &name, int signnote,int grade);
    int            getGrade()const;
    const string&  getName()const;
    bool           getStatus()const;
    int            signNote()const;
    void           beSigned(const Bureaucrat& br);

};


std::ostream&   operator<<(std::ostream& out, const Form& f);

#endif