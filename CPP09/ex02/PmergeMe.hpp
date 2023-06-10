#ifndef PMERGEME_H
#define PMERGEME_H

#include <iostream>
#include <deque>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>

template <typename T>
class DisplayHelper
{
public:
    static void display(const T& container)
    {
        typename T::const_iterator it;
        for (it = container.begin(); it != container.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
};

class PmergeMe
{
public:
    PmergeMe(int ac, char** av);

private:
    template <typename Container>
    void mergeInsertSort(Container& arr);

    std::deque<int> inputDeque;
    std::list<int> inputList;
};

#endif // PMERGEME_H
