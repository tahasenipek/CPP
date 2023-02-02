#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>
#include <iostream>
#include <exception>
#include <fstream>
class Bureaucrat;

using std::endl;
using std::cout;
using std::string;

class AForm
{
private:
    const string    name;
    bool            b;
    const int       signnote;
    const int       grade;
public:
    AForm();
    ~AForm();
    AForm(const AForm &AForm);
    AForm(const string &name);
    AForm&         operator=(const AForm &i);
    AForm(const string &name, int signnote,int grade);
    int            getGrade()const;
    const string&  getName()const;
    bool           getStatus()const;
    int            signNote()const;
    void           beSigned(const Bureaucrat& br);
   virtual void    execute(Bureaucrat const & executor) const = 0;
    class GradeTooHighException : public std::exception
    {
        public:
          virtual const char* what() const throw(){
                return "Grade too high!!";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
          virtual const char* what() const throw(){
                return "Grade too low!!";
            }
    };
};


std::ostream&   operator<<(std::ostream& out, const AForm& f);

#endif