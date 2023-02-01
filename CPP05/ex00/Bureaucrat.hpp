#ifndef _BUREUCRAT_HPP_
#define _BUREUCRAT_HPP_

#include <iostream>
#include <exception>

using std::endl;
using std::cout;
using std::string;

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
};

std::ostream& operator<<(std::ostream& out , const Bureaucrat& b);


#endif