#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{	
    try
    {
        Bureaucrat bureucrat("James", 20);
        Bureaucrat bureucrattwo("Heny", 42);
        cout << bureucrat;
        Form    Form1("Form1",43, 30);
        cout << Form1;
        bureucrattwo.signForm(Form1);
        Form1.beSigned(bureucrat);
    }
    catch(std::exception& e){
        std::cerr << e.what() << endl;
    }
   
}