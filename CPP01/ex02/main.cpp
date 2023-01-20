#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string announce = "HI THIS IS BRAIN";
    string *ptr = &announce;
    string &ref = announce;

    cout << "The memory address of the string variable :" << &announce << endl;
    cout << "The memory address held by stringPTR      :" << ptr << endl;
    cout << "The memory address held by stringREF      :" << &ref << endl;

    cout << "The value of the string variable  :" << announce << endl;
    cout << "The value pointed to by stringPTR :" << *ptr << endl;
    cout << "The value pointed to by stringREF :" << ref << endl;
}