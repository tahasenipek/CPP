#include "Array.hpp"


int main()
{
    Array<int> a(5);

    a[0] = 1;
    a[0] = 2;
    a[0] = 3;
    a[0] = 4;
    a[0] = 5;


    Array<int> b = a;

    for (unsigned int i = 0; i < a.size(); i++)
    {
        std::cout << "a[" << i << "]" << ":" << a[i] << '\n'; 
    }

    for (unsigned int i = 0; i < b.size(); i++)
    {
        std::cout << "b[" << i << "]" << ":" << a[i] << '\n'; 
    }
    return (0);
}