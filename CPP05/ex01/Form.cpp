#include "Form.hpp"


Form::Form() :name("Default"), b(false), signnote(150), grade(150)
{
    cout << "Form default called!!" << endl;  
}
Form::Form(const string &name) : name(name), signnote(150), grade(150)
{
    
}

Form::Form(const string &name,const int signnote,const int grade) : name(name), b(false), signnote(signnote), grade(grade)
{
    if (this->getGrade() < 1 || this->signNote() < 1)
        throw GradeTooHighException();
    else if (this-> getGrade() > 150 || this->signNote() >  150)
        throw GradeTooLowException();
    cout << "Form " << this->name << " called !!" << endl;
}

Form::Form(const Form &form) : name(form.name), grade(form.grade), signnote(form.signnote)
{
    *this = form;
    cout <<  "Form copy constructor called!! " << endl;
}

Form::~Form()
{
    cout << "Form Destructor Called !!" << endl;
}

Form&    Form::operator=(const Form &i)
{
    cout << "Form assigment operator called!!" << endl;
    this->b = i.b;
    return (*this);
}

int Form::signNote()const
{
    return(this->signnote);
}

const string&  Form::getName()const
{
   return (this->name);
}
int     Form::getGrade()const
{
    return (this->grade);
}
bool    Form::getStatus()const
{
    return this->b;
}

void    Form::beSigned(const Bureaucrat& br)
{
    
    if (br.getGrade() <= this->signNote())
        this->b = true;
    else
        throw Form::GradeTooLowException();  
}


std::ostream&   operator<<(std::ostream& out, const Form& f)
{
    out << f.getName() << ", grade: " << f.getGrade() << " signed: " << (f.getStatus()) << " Signed Note: " << f.signNote() << std::endl;
    return (out);
}
