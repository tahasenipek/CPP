#include "Bureaucrat.hpp"
#include <ostream>
int main()
{
    try
    {
        Bureaucrat bureucrat("James", 12);
        Bureaucrat bureucrattwo("Heny", 132);
        cout << bureucrat;
        cout << bureucrattwo;
        for (int i = 0; i < 10; i++)
        {
            bureucrat.decrement();
            bureucrattwo.decrement();
        }
         for (int i = 0; i < 10; i++)
        {
            bureucrat.increment();
            bureucrattwo.increment();
        }
        cout << bureucrat;
        cout << bureucrattwo;
    }
    catch(std::exception& e){
        std::cerr << e.what() << endl;
    }
    return (0);
}