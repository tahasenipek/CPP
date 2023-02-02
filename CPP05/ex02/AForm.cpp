#include "AForm.hpp"


AForm::AForm() :name(""), b(false), signnote(150), grade(150)
{
    cout << "AForm default called!!" << endl;  
}
AForm::AForm(const string &name) : name(name), signnote(150), grade(150)
{
    ;
}

AForm::AForm(const string &name,const int signnote,const int grade) : name(name), b(false), signnote(signnote), grade(grade)
{
    if (this->getGrade() < 1 || this->signNote() < 1)
        throw GradeTooHighException();
    else if (this-> getGrade() > 150 || this->signNote() >  150)
        throw GradeTooLowException();
    cout << "AForm " << this->name << " called !!" << endl;
}

AForm::AForm(const AForm &AForm) : name(AForm.name), grade(AForm.grade), signnote(AForm.signnote)
{
    *this = AForm;
    cout <<  "AForm copy constructor called!! " << endl;
}

AForm::~AForm()
{
    cout << "AForm Destructor Called !!" << endl;
}

AForm&    AForm::operator=(const AForm &i)
{
    cout << "AForm assigment operator called!!" << endl;
    this->b = i.b;
    return (*this);
}

int AForm::signNote()const
{
    return(this->signnote);
}

const string&  AForm::getName()const
{
   return (this->name);
}
int     AForm::getGrade()const
{
    return (this->grade);
}
bool    AForm::getStatus()const
{
    return this->b;
}

void    AForm::beSigned(const Bureaucrat& br)
{
    
    if (br.getGrade() <= this->signNote())
        this->b = true;
    else
        throw AForm::GradeTooLowException();  
}


std::ostream&   operator<<(std::ostream& out, const AForm& f)
{
    out << f.getName() << ", grade: " << f.getGrade() << " signed: " << (f.getStatus()) << " Signed Note: " << f.signNote() << std::endl;
    return (out);
}
