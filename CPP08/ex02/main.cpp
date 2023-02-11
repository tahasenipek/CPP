#include "MutantStack.hpp"
#include <list>
#include <algorithm>
#include <stack>
#include <vector>
#include <iostream>

int main()
{
    std::stack<int> stk;
	
	stk.push(5);
	std::cout << "Address of stack: " << &stk.top() << "\nValue of Stack: " << stk.top() << std::endl << std::endl;
	stk.push(2);
	std::cout << "Address of stack: " << &stk.top() << "\nValue of Stack: " << stk.top() << std::endl << std::endl;
	stk.push(-7);
	std::cout << "Address of stack: " << &stk.top() << "\nValue of Stack: " << stk.top() << std::endl << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

	++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);


    std::cout << std::endl;

    std::list< int > lst;

    lst.push_back(5);
    lst.push_back(17);

    std::cout << lst.back() << std::endl;

    lst.pop_back();
    std::cout << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    //[...]
    lst.push_back(0);

    std::list<int>::iterator lst_it = lst.begin();
    std::list<int>::iterator lst_ite = lst.end();

    ++it;
    --it;
    while (lst_it != lst_ite)
    {
        std::cout << *lst_it << std::endl;
        ++lst_it;
    }
    std::list<int> l(lst);

    return (0);
}